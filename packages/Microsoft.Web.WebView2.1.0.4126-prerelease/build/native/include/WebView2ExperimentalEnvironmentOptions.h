// Copyright (C) Microsoft Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef __core_webview2_experimental_environment_options_h__
#define __core_webview2_experimental_environment_options_h__

#include <objbase.h>

#include <wrl/implements.h>

#include <map>

#include "WebView2Experimental.h"
#include "WebView2EnvironmentOptions.h"

// This is a base COM class that implements IUnknown if there is no Experimental
// options, or ICoreWebView2ExperimentalEnvironmentOptions when there are
// Experimental options.
template <typename allocate_fn_t,
          allocate_fn_t allocate_fn,
          typename deallocate_fn_t,
          deallocate_fn_t deallocate_fn>
class CoreWebView2ExperimentalEnvironmentOptionsBase
    : public Microsoft::WRL::Implements<
          Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::ClassicCom>,
          ICoreWebView2ExperimentalEnvironmentOptions> {
 public:

  CoreWebView2ExperimentalEnvironmentOptionsBase() {}

 protected:
  ~CoreWebView2ExperimentalEnvironmentOptionsBase() = default;

  // ICoreWebView2ExperimentalEnvironmentOptions
  HRESULT STDMETHODCALLTYPE
  SetAllowedPortRange(COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE scope,
                      COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND protocol,
                      INT32 minPort,
                      INT32 maxPort) override {
    // Validate enum values and port range according to transport protocol
    // requirements
    if (!IsValidPortConfig(scope, protocol, minPort, maxPort)) {
      return E_INVALIDARG;
    }

    // Store port range configuration as a simple pair
    auto key = MakePortConfigKey(scope, protocol);
    port_configs_[key] = std::make_pair(minPort, maxPort);

    return S_OK;
  }

  HRESULT STDMETHODCALLTYPE
  GetEffectiveAllowedPortRange(COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE scope,
                               COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND protocol,
                               INT32* minPort,
                               INT32* maxPort) override {
    // Validate enum values - defensive check against invalid casting or
    // corruption Expected: DEFAULT=0, WEB_RTC=1. Rejects any other values (e.g.
    // 999, -1)
    if (scope != COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE_DEFAULT &&
        scope != COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE_WEB_RTC) {
      return E_INVALIDARG;
    }

    if (protocol != COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND_UDP) {
      return E_INVALIDARG;
    }

    if (!minPort || !maxPort) {
      return E_INVALIDARG;
    }

    auto key = MakePortConfigKey(scope, protocol);
    auto it = port_configs_.find(key);

    if (it != port_configs_.end()) {
      // Return configured port range for the specific scope and protocol
      *minPort = it->second.first;
      *maxPort = it->second.second;
      return S_OK;
    }

    // Given scope not explicitly set, check if Default is set (inheritance
    // behavior)
    auto default_key = MakePortConfigKey(
        COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE_DEFAULT, protocol);
    auto default_it = port_configs_.find(default_key);
    if (default_it != port_configs_.end()) {
      // Inherit from Default scope
      *minPort = default_it->second.first;
      *maxPort = default_it->second.second;
      return S_OK;
    }

    // Neither Specified scope nor default set - return unset (0,0)
    *minPort = 0;
    *maxPort = 0;
    return S_OK;
  }

 private:
  // Helper to create key for port configuration map
  std::pair<COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE,
            COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND>
  MakePortConfigKey(COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE scope,
                    COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND protocol) const {
    return std::make_pair(scope, protocol);
  }

  // Validates port range and enum values according to transport protocol
  // requirements
  bool IsValidPortConfig(COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE scope,
                         COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND protocol,
                         INT32 minPort,
                         INT32 maxPort) const {
    // Validate enum values - only supported values should be accepted
    if (scope != COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE_DEFAULT &&
        scope != COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE_WEB_RTC) {
      return false;
    }

    if (protocol != COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND_UDP) {
      return false;
    }

    // Allow (0,0) as a special case for resetting/removing restrictions
    if (minPort == 0 && maxPort == 0) {
      return true;
    }

    // Port range validation for transport protocols:
    // - Ports must be in range 1025-65535 (inclusive)
    // - minPort must be less than or equal to maxPort
    const INT32 kMinValidPort = 1025;
    const INT32 kMaxValidPort = 65535;

    if (minPort < kMinValidPort || minPort > kMaxValidPort) {
      return false;
    }

    if (maxPort < kMinValidPort || maxPort > kMaxValidPort) {
      return false;
    }

    if (minPort > maxPort) {
      return false;
    }

    return true;
  }

  // Port configuration storage - map of (scope, protocol) -> (minPort, maxPort)
  std::map<std::pair<COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE,
                     COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND>,
           std::pair<INT32, INT32>>
      port_configs_;
};

template <typename allocate_fn_t,
          allocate_fn_t allocate_fn,
          typename deallocate_fn_t,
          deallocate_fn_t deallocate_fn>
class CoreWebView2ExperimentalEnvironmentOptionsClass
    : public Microsoft::WRL::RuntimeClass<
          Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::ClassicCom>,
          CoreWebView2EnvironmentOptionsBase<allocate_fn_t,
                                             allocate_fn,
                                             deallocate_fn_t,
                                             deallocate_fn>,
          CoreWebView2ExperimentalEnvironmentOptionsBase<allocate_fn_t,
                                                         allocate_fn,
                                                         deallocate_fn_t,
                                                         deallocate_fn>> {
 public:
  CoreWebView2ExperimentalEnvironmentOptionsClass() {}

  ~CoreWebView2ExperimentalEnvironmentOptionsClass() override{}
};

typedef CoreWebView2ExperimentalEnvironmentOptionsClass<
    decltype(&::CoTaskMemAlloc),
    ::CoTaskMemAlloc,
    decltype(&::CoTaskMemFree),
    ::CoTaskMemFree>
    CoreWebView2ExperimentalEnvironmentOptions;

#endif  // __core_webview2_experimental_environment_options_h__
