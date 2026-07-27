

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../edge_embedded_browser/client/win/current/WebView2Experimental.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.xx.xxxx 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __WebView2Experimental_h__
#define __WebView2Experimental_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ICoreWebView2Experimental20_FWD_DEFINED__
#define __ICoreWebView2Experimental20_FWD_DEFINED__
typedef interface ICoreWebView2Experimental20 ICoreWebView2Experimental20;

#endif 	/* __ICoreWebView2Experimental20_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental31_FWD_DEFINED__
#define __ICoreWebView2Experimental31_FWD_DEFINED__
typedef interface ICoreWebView2Experimental31 ICoreWebView2Experimental31;

#endif 	/* __ICoreWebView2Experimental31_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental32_FWD_DEFINED__
#define __ICoreWebView2Experimental32_FWD_DEFINED__
typedef interface ICoreWebView2Experimental32 ICoreWebView2Experimental32;

#endif 	/* __ICoreWebView2Experimental32_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__
#define __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalCompositionController4 ICoreWebView2ExperimentalCompositionController4;

#endif 	/* __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCrashReport_FWD_DEFINED__
#define __ICoreWebView2ExperimentalCrashReport_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalCrashReport ICoreWebView2ExperimentalCrashReport;

#endif 	/* __ICoreWebView2ExperimentalCrashReport_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironment3 ICoreWebView2ExperimentalEnvironment3;

#endif 	/* __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment12_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment12_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironment12 ICoreWebView2ExperimentalEnvironment12;

#endif 	/* __ICoreWebView2ExperimentalEnvironment12_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment15_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment15_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironment15 ICoreWebView2ExperimentalEnvironment15;

#endif 	/* __ICoreWebView2ExperimentalEnvironment15_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalRestartRequestedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalRestartRequestedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalRestartRequestedEventHandler ICoreWebView2ExperimentalRestartRequestedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalRestartRequestedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironmentOptions_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironmentOptions_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironmentOptions ICoreWebView2ExperimentalEnvironmentOptions;

#endif 	/* __ICoreWebView2ExperimentalEnvironmentOptions_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalFrame7_FWD_DEFINED__
#define __ICoreWebView2ExperimentalFrame7_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalFrame7 ICoreWebView2ExperimentalFrame7;

#endif 	/* __ICoreWebView2ExperimentalFrame7_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalMipSensitivityLabel_FWD_DEFINED__
#define __ICoreWebView2ExperimentalMipSensitivityLabel_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalMipSensitivityLabel ICoreWebView2ExperimentalMipSensitivityLabel;

#endif 	/* __ICoreWebView2ExperimentalMipSensitivityLabel_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_FWD_DEFINED__
#define __ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalOriginFeatureSettingCollectionView ICoreWebView2ExperimentalOriginFeatureSettingCollectionView;

#endif 	/* __ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalOriginFeatureSetting_FWD_DEFINED__
#define __ICoreWebView2ExperimentalOriginFeatureSetting_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalOriginFeatureSetting ICoreWebView2ExperimentalOriginFeatureSetting;

#endif 	/* __ICoreWebView2ExperimentalOriginFeatureSetting_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProcessFailedEventArgs2_FWD_DEFINED__
#define __ICoreWebView2ExperimentalProcessFailedEventArgs2_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalProcessFailedEventArgs2 ICoreWebView2ExperimentalProcessFailedEventArgs2;

#endif 	/* __ICoreWebView2ExperimentalProcessFailedEventArgs2_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile7_FWD_DEFINED__
#define __ICoreWebView2ExperimentalProfile7_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalProfile7 ICoreWebView2ExperimentalProfile7;

#endif 	/* __ICoreWebView2ExperimentalProfile7_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile14_FWD_DEFINED__
#define __ICoreWebView2ExperimentalProfile14_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalProfile14 ICoreWebView2ExperimentalProfile14;

#endif 	/* __ICoreWebView2ExperimentalProfile14_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile16_FWD_DEFINED__
#define __ICoreWebView2ExperimentalProfile16_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalProfile16 ICoreWebView2ExperimentalProfile16;

#endif 	/* __ICoreWebView2ExperimentalProfile16_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile17_FWD_DEFINED__
#define __ICoreWebView2ExperimentalProfile17_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalProfile17 ICoreWebView2ExperimentalProfile17;

#endif 	/* __ICoreWebView2ExperimentalProfile17_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalRestartRequestedEventArgs_FWD_DEFINED__
#define __ICoreWebView2ExperimentalRestartRequestedEventArgs_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalRestartRequestedEventArgs ICoreWebView2ExperimentalRestartRequestedEventArgs;

#endif 	/* __ICoreWebView2ExperimentalRestartRequestedEventArgs_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSensitivityInfo_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSensitivityInfo_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSensitivityInfo ICoreWebView2ExperimentalSensitivityInfo;

#endif 	/* __ICoreWebView2ExperimentalSensitivityInfo_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSensitivityLabelCollectionView_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSensitivityLabelCollectionView_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSensitivityLabelCollectionView ICoreWebView2ExperimentalSensitivityLabelCollectionView;

#endif 	/* __ICoreWebView2ExperimentalSensitivityLabelCollectionView_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSensitivityLabel_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSensitivityLabel_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSensitivityLabel ICoreWebView2ExperimentalSensitivityLabel;

#endif 	/* __ICoreWebView2ExperimentalSensitivityLabel_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSettings9_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSettings9_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSettings9 ICoreWebView2ExperimentalSettings9;

#endif 	/* __ICoreWebView2ExperimentalSettings9_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTexture_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTexture_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTexture ICoreWebView2ExperimentalTexture;

#endif 	/* __ICoreWebView2ExperimentalTexture_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStream_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStream_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStream ICoreWebView2ExperimentalTextureStream;

#endif 	/* __ICoreWebView2ExperimentalTextureStream_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamStoppedEventHandler ICoreWebView2ExperimentalTextureStreamStoppedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalUpdateRuntimeResult ICoreWebView2ExperimentalUpdateRuntimeResult;

#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalWebTexture_FWD_DEFINED__
#define __ICoreWebView2ExperimentalWebTexture_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalWebTexture ICoreWebView2ExperimentalWebTexture;

#endif 	/* __ICoreWebView2ExperimentalWebTexture_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalWindowControlsOverlay_FWD_DEFINED__
#define __ICoreWebView2ExperimentalWindowControlsOverlay_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalWindowControlsOverlay ICoreWebView2ExperimentalWindowControlsOverlay;

#endif 	/* __ICoreWebView2ExperimentalWindowControlsOverlay_FWD_DEFINED__ */


/* header files for imported files */
#include "WebView2.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __WebView2Experimental_LIBRARY_DEFINED__
#define __WebView2Experimental_LIBRARY_DEFINED__

/* library WebView2Experimental */
/* [version][uuid] */ 










































typedef /* [v1_enum] */ 
enum COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE
    {
        COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE_DEFAULT	= 0,
        COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE_WEB_RTC	= ( COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE_DEFAULT + 1 ) 
    } 	COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_ENHANCED_SECURITY_MODE_STATE
    {
        COREWEBVIEW2_ENHANCED_SECURITY_MODE_STATE_DISABLED	= 0,
        COREWEBVIEW2_ENHANCED_SECURITY_MODE_STATE_ENABLED	= ( COREWEBVIEW2_ENHANCED_SECURITY_MODE_STATE_DISABLED + 1 ) 
    } 	COREWEBVIEW2_ENHANCED_SECURITY_MODE_STATE;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_ORIGIN_FEATURE
    {
        COREWEBVIEW2_ORIGIN_FEATURE_ENHANCED_SECURITY_MODE	= 0,
        COREWEBVIEW2_ORIGIN_FEATURE_REPUTATION_CHECKING	= ( COREWEBVIEW2_ORIGIN_FEATURE_ENHANCED_SECURITY_MODE + 1 ) 
    } 	COREWEBVIEW2_ORIGIN_FEATURE;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_ORIGIN_FEATURE_STATE
    {
        COREWEBVIEW2_ORIGIN_FEATURE_STATE_ENABLED	= 0,
        COREWEBVIEW2_ORIGIN_FEATURE_STATE_DISABLED	= ( COREWEBVIEW2_ORIGIN_FEATURE_STATE_ENABLED + 1 ) 
    } 	COREWEBVIEW2_ORIGIN_FEATURE_STATE;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_RESTART_REQUESTED_PRIORITY
    {
        COREWEBVIEW2_RESTART_REQUESTED_PRIORITY_NORMAL	= 1000,
        COREWEBVIEW2_RESTART_REQUESTED_PRIORITY_HIGH	= 2000
    } 	COREWEBVIEW2_RESTART_REQUESTED_PRIORITY;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_SENSITIVITY_LABEL_KIND
    {
        COREWEBVIEW2_SENSITIVITY_LABEL_KIND_MIP	= 0
    } 	COREWEBVIEW2_SENSITIVITY_LABEL_KIND;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_SENSITIVITY_LABELS_STATE
    {
        COREWEBVIEW2_SENSITIVITY_LABELS_STATE_NOT_APPLICABLE	= 0,
        COREWEBVIEW2_SENSITIVITY_LABELS_STATE_PENDING	= ( COREWEBVIEW2_SENSITIVITY_LABELS_STATE_NOT_APPLICABLE + 1 ) ,
        COREWEBVIEW2_SENSITIVITY_LABELS_STATE_AVAILABLE	= ( COREWEBVIEW2_SENSITIVITY_LABELS_STATE_PENDING + 1 ) 
    } 	COREWEBVIEW2_SENSITIVITY_LABELS_STATE;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND
    {
        COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND_NO_VIDEO_TRACK_STARTED	= 0,
        COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND_TEXTURE_ERROR	= ( COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND_NO_VIDEO_TRACK_STARTED + 1 ) ,
        COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND_TEXTURE_IN_USE	= ( COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND_TEXTURE_ERROR + 1 ) 
    } 	COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND
    {
        COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND_UDP	= 0
    } 	COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_UPDATE_RUNTIME_STATUS
    {
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_LATEST_VERSION_INSTALLED	= 0,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_UPDATE_ALREADY_RUNNING	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_LATEST_VERSION_INSTALLED + 1 ) ,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_BLOCKED_BY_POLICY	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_UPDATE_ALREADY_RUNNING + 1 ) ,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_FAILED	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_BLOCKED_BY_POLICY + 1 ) 
    } 	COREWEBVIEW2_UPDATE_RUNTIME_STATUS;

typedef struct COREWEBVIEW2_MATRIX_4X4
    {
    FLOAT _11;
    FLOAT _12;
    FLOAT _13;
    FLOAT _14;
    FLOAT _21;
    FLOAT _22;
    FLOAT _23;
    FLOAT _24;
    FLOAT _31;
    FLOAT _32;
    FLOAT _33;
    FLOAT _34;
    FLOAT _41;
    FLOAT _42;
    FLOAT _43;
    FLOAT _44;
    } 	COREWEBVIEW2_MATRIX_4X4;


EXTERN_C const IID LIBID_WebView2Experimental;

#ifndef __ICoreWebView2Experimental20_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental20_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental20 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental20 = {0x5a4d0ecf,0x3fe5,0x4456,{0xac,0xe5,0xd3,0x17,0xcc,0xa0,0xef,0xf1}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5a4d0ecf-3fe5-4456-ace5-d317cca0eff1")
    ICoreWebView2Experimental20 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CustomDataPartitionId( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CustomDataPartitionId( 
            /* [in] */ LPCWSTR value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental20Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental20 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental20 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental20 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental20, get_CustomDataPartitionId)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomDataPartitionId )( 
            ICoreWebView2Experimental20 * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental20, put_CustomDataPartitionId)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomDataPartitionId )( 
            ICoreWebView2Experimental20 * This,
            /* [in] */ LPCWSTR value);
        
        END_INTERFACE
    } ICoreWebView2Experimental20Vtbl;

    interface ICoreWebView2Experimental20
    {
        CONST_VTBL struct ICoreWebView2Experimental20Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental20_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental20_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental20_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental20_get_CustomDataPartitionId(This,value)	\
    ( (This)->lpVtbl -> get_CustomDataPartitionId(This,value) ) 

#define ICoreWebView2Experimental20_put_CustomDataPartitionId(This,value)	\
    ( (This)->lpVtbl -> put_CustomDataPartitionId(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental20_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental31_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental31_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental31 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental31 = {0xe68b6e14,0xda59,0x5e50,{0xaa,0x3e,0x0a,0x19,0x0d,0x1f,0x04,0xd3}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e68b6e14-da59-5e50-aa3e-0a190d1f04d3")
    ICoreWebView2Experimental31 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WindowControlsOverlay( 
            /* [retval][out] */ ICoreWebView2ExperimentalWindowControlsOverlay **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental31Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental31 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental31 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental31 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental31, get_WindowControlsOverlay)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WindowControlsOverlay )( 
            ICoreWebView2Experimental31 * This,
            /* [retval][out] */ ICoreWebView2ExperimentalWindowControlsOverlay **value);
        
        END_INTERFACE
    } ICoreWebView2Experimental31Vtbl;

    interface ICoreWebView2Experimental31
    {
        CONST_VTBL struct ICoreWebView2Experimental31Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental31_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental31_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental31_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental31_get_WindowControlsOverlay(This,value)	\
    ( (This)->lpVtbl -> get_WindowControlsOverlay(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental31_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental32_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental32_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental32 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental32 = {0x862c39a8,0xf64f,0x5a97,{0xba,0xe2,0xdb,0x56,0x51,0x02,0x0b,0x34}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("862c39a8-f64f-5a97-bae2-db5651020b34")
    ICoreWebView2Experimental32 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SensitivityInfo( 
            /* [retval][out] */ ICoreWebView2ExperimentalSensitivityInfo **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_SensitivityInfoChanged( 
            /* [in] */ ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_SensitivityInfoChanged( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental32Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental32 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental32 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental32 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental32, get_SensitivityInfo)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SensitivityInfo )( 
            ICoreWebView2Experimental32 * This,
            /* [retval][out] */ ICoreWebView2ExperimentalSensitivityInfo **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental32, add_SensitivityInfoChanged)
        HRESULT ( STDMETHODCALLTYPE *add_SensitivityInfoChanged )( 
            ICoreWebView2Experimental32 * This,
            /* [in] */ ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental32, remove_SensitivityInfoChanged)
        HRESULT ( STDMETHODCALLTYPE *remove_SensitivityInfoChanged )( 
            ICoreWebView2Experimental32 * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2Experimental32Vtbl;

    interface ICoreWebView2Experimental32
    {
        CONST_VTBL struct ICoreWebView2Experimental32Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental32_get_SensitivityInfo(This,value)	\
    ( (This)->lpVtbl -> get_SensitivityInfo(This,value) ) 

#define ICoreWebView2Experimental32_add_SensitivityInfoChanged(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_SensitivityInfoChanged(This,eventHandler,token) ) 

#define ICoreWebView2Experimental32_remove_SensitivityInfoChanged(This,token)	\
    ( (This)->lpVtbl -> remove_SensitivityInfoChanged(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental32_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler = {0xada2e261,0x0e15,0x5b64,{0x84,0x22,0xf4,0x37,0x3e,0xb0,0xd5,0x52}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ada2e261-0e15-5b64-8422-f4373eb0d552")
    ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2 *sender,
            /* [in] */ IUnknown *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSensitivityInfoChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler * This,
            /* [in] */ ICoreWebView2 *sender,
            /* [in] */ IUnknown *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSensitivityInfoChangedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSensitivityInfoChangedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSensitivityInfoChangedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalCompositionController4 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalCompositionController4 = {0xe6041d7f,0x18ac,0x4654,{0xa0,0x4e,0x8b,0x3f,0x81,0x25,0x1c,0x33}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e6041d7f-18ac-4654-a04e-8b3f81251c33")
    ICoreWebView2ExperimentalCompositionController4 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AutomationProvider( 
            /* [retval][out] */ IUnknown **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2PointerInfoFromPointerId( 
            /* [in] */ UINT32 PointerId,
            /* [in] */ HWND ParentWindow,
            /* [in] */ COREWEBVIEW2_MATRIX_4X4 transform,
            /* [retval][out] */ ICoreWebView2PointerInfo **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalCompositionController4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalCompositionController4 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalCompositionController4 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCompositionController4, get_AutomationProvider)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutomationProvider )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [retval][out] */ IUnknown **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCompositionController4, CreateCoreWebView2PointerInfoFromPointerId)
        HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2PointerInfoFromPointerId )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [in] */ UINT32 PointerId,
            /* [in] */ HWND ParentWindow,
            /* [in] */ COREWEBVIEW2_MATRIX_4X4 transform,
            /* [retval][out] */ ICoreWebView2PointerInfo **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalCompositionController4Vtbl;

    interface ICoreWebView2ExperimentalCompositionController4
    {
        CONST_VTBL struct ICoreWebView2ExperimentalCompositionController4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalCompositionController4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalCompositionController4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalCompositionController4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalCompositionController4_get_AutomationProvider(This,value)	\
    ( (This)->lpVtbl -> get_AutomationProvider(This,value) ) 

#define ICoreWebView2ExperimentalCompositionController4_CreateCoreWebView2PointerInfoFromPointerId(This,PointerId,ParentWindow,transform,value)	\
    ( (This)->lpVtbl -> CreateCoreWebView2PointerInfoFromPointerId(This,PointerId,ParentWindow,transform,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCrashReport_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalCrashReport_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalCrashReport */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalCrashReport = {0x74128fe8,0x5080,0x5f46,{0x94,0x1d,0xfb,0x74,0x7b,0x0b,0xcd,0x62}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74128fe8-5080-5f46-941d-fb747b0bcd62")
    ICoreWebView2ExperimentalCrashReport : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BucketId( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CrashReportId( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExceptionCode( 
            /* [retval][out] */ UINT32 *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FaultOffset( 
            /* [retval][out] */ UINT64 *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FaultingModuleName( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FaultingModuleVersion( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReportTime( 
            /* [retval][out] */ UINT64 *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalCrashReportVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalCrashReport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalCrashReport * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalCrashReport * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCrashReport, get_BucketId)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BucketId )( 
            ICoreWebView2ExperimentalCrashReport * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCrashReport, get_CrashReportId)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CrashReportId )( 
            ICoreWebView2ExperimentalCrashReport * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCrashReport, get_ExceptionCode)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExceptionCode )( 
            ICoreWebView2ExperimentalCrashReport * This,
            /* [retval][out] */ UINT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCrashReport, get_FaultOffset)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaultOffset )( 
            ICoreWebView2ExperimentalCrashReport * This,
            /* [retval][out] */ UINT64 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCrashReport, get_FaultingModuleName)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaultingModuleName )( 
            ICoreWebView2ExperimentalCrashReport * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCrashReport, get_FaultingModuleVersion)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaultingModuleVersion )( 
            ICoreWebView2ExperimentalCrashReport * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCrashReport, get_ReportTime)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReportTime )( 
            ICoreWebView2ExperimentalCrashReport * This,
            /* [retval][out] */ UINT64 *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalCrashReportVtbl;

    interface ICoreWebView2ExperimentalCrashReport
    {
        CONST_VTBL struct ICoreWebView2ExperimentalCrashReportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalCrashReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalCrashReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalCrashReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalCrashReport_get_BucketId(This,value)	\
    ( (This)->lpVtbl -> get_BucketId(This,value) ) 

#define ICoreWebView2ExperimentalCrashReport_get_CrashReportId(This,value)	\
    ( (This)->lpVtbl -> get_CrashReportId(This,value) ) 

#define ICoreWebView2ExperimentalCrashReport_get_ExceptionCode(This,value)	\
    ( (This)->lpVtbl -> get_ExceptionCode(This,value) ) 

#define ICoreWebView2ExperimentalCrashReport_get_FaultOffset(This,value)	\
    ( (This)->lpVtbl -> get_FaultOffset(This,value) ) 

#define ICoreWebView2ExperimentalCrashReport_get_FaultingModuleName(This,value)	\
    ( (This)->lpVtbl -> get_FaultingModuleName(This,value) ) 

#define ICoreWebView2ExperimentalCrashReport_get_FaultingModuleVersion(This,value)	\
    ( (This)->lpVtbl -> get_FaultingModuleVersion(This,value) ) 

#define ICoreWebView2ExperimentalCrashReport_get_ReportTime(This,value)	\
    ( (This)->lpVtbl -> get_ReportTime(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalCrashReport_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironment3 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironment3 = {0x9a2be885,0x7f0b,0x4b26,{0xb6,0xdd,0xc9,0x69,0xba,0xa0,0x0b,0xf1}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9a2be885-7f0b-4b26-b6dd-c969baa00bf1")
    ICoreWebView2ExperimentalEnvironment3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateRuntime( 
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironment3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironment3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironment3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironment3 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment3, UpdateRuntime)
        HRESULT ( STDMETHODCALLTYPE *UpdateRuntime )( 
            ICoreWebView2ExperimentalEnvironment3 * This,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironment3Vtbl;

    interface ICoreWebView2ExperimentalEnvironment3
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironment3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironment3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironment3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironment3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironment3_UpdateRuntime(This,handler)	\
    ( (This)->lpVtbl -> UpdateRuntime(This,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler = {0xf1d2d722,0x3721,0x499c,{0x87,0xf5,0x4c,0x40,0x52,0x60,0x69,0x7a}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f1d2d722-3721-499c-87f5-4c405260697a")
    ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeResult *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This,
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeResult *result);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_Invoke(This,errorCode,result)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment12_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment12_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironment12 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironment12 = {0x96c27a45,0xf142,0x4873,{0x80,0xad,0x9d,0x0c,0xd8,0x99,0xb2,0xb9}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96c27a45-f142-4873-80ad-9d0cd899b2b9")
    ICoreWebView2ExperimentalEnvironment12 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateTextureStream( 
            /* [in] */ LPCWSTR streamId,
            /* [in] */ IUnknown *d3dDevice,
            /* [retval][out] */ ICoreWebView2ExperimentalTextureStream **value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RenderAdapterLUID( 
            /* [retval][out] */ UINT64 *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_RenderAdapterLUIDChanged( 
            /* [in] */ ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_RenderAdapterLUIDChanged( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironment12Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironment12 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironment12 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironment12 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment12, CreateTextureStream)
        HRESULT ( STDMETHODCALLTYPE *CreateTextureStream )( 
            ICoreWebView2ExperimentalEnvironment12 * This,
            /* [in] */ LPCWSTR streamId,
            /* [in] */ IUnknown *d3dDevice,
            /* [retval][out] */ ICoreWebView2ExperimentalTextureStream **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment12, get_RenderAdapterLUID)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenderAdapterLUID )( 
            ICoreWebView2ExperimentalEnvironment12 * This,
            /* [retval][out] */ UINT64 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment12, add_RenderAdapterLUIDChanged)
        HRESULT ( STDMETHODCALLTYPE *add_RenderAdapterLUIDChanged )( 
            ICoreWebView2ExperimentalEnvironment12 * This,
            /* [in] */ ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment12, remove_RenderAdapterLUIDChanged)
        HRESULT ( STDMETHODCALLTYPE *remove_RenderAdapterLUIDChanged )( 
            ICoreWebView2ExperimentalEnvironment12 * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironment12Vtbl;

    interface ICoreWebView2ExperimentalEnvironment12
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironment12Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironment12_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironment12_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironment12_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironment12_CreateTextureStream(This,streamId,d3dDevice,value)	\
    ( (This)->lpVtbl -> CreateTextureStream(This,streamId,d3dDevice,value) ) 

#define ICoreWebView2ExperimentalEnvironment12_get_RenderAdapterLUID(This,value)	\
    ( (This)->lpVtbl -> get_RenderAdapterLUID(This,value) ) 

#define ICoreWebView2ExperimentalEnvironment12_add_RenderAdapterLUIDChanged(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_RenderAdapterLUIDChanged(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalEnvironment12_remove_RenderAdapterLUIDChanged(This,token)	\
    ( (This)->lpVtbl -> remove_RenderAdapterLUIDChanged(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironment12_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler = {0x431721e0,0x0f18,0x4d7b,{0xbd,0x4d,0xe5,0xb1,0x52,0x2b,0xb1,0x10}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("431721e0-0f18-4d7b-bd4d-e5b1522bb110")
    ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalEnvironment12 *sender,
            /* [in] */ IUnknown *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalEnvironment12 *sender,
            /* [in] */ IUnknown *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment15_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment15_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironment15 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironment15 = {0x74ce74ee,0xb71c,0x5015,{0x87,0x28,0x39,0xeb,0xf3,0xb5,0x9a,0x89}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74ce74ee-b71c-5015-8728-39ebf3b59a89")
    ICoreWebView2ExperimentalEnvironment15 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE add_RestartRequested( 
            /* [in] */ ICoreWebView2ExperimentalRestartRequestedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_RestartRequested( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironment15Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironment15 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironment15 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironment15 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment15, add_RestartRequested)
        HRESULT ( STDMETHODCALLTYPE *add_RestartRequested )( 
            ICoreWebView2ExperimentalEnvironment15 * This,
            /* [in] */ ICoreWebView2ExperimentalRestartRequestedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment15, remove_RestartRequested)
        HRESULT ( STDMETHODCALLTYPE *remove_RestartRequested )( 
            ICoreWebView2ExperimentalEnvironment15 * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironment15Vtbl;

    interface ICoreWebView2ExperimentalEnvironment15
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironment15Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironment15_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironment15_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironment15_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironment15_add_RestartRequested(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_RestartRequested(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalEnvironment15_remove_RestartRequested(This,token)	\
    ( (This)->lpVtbl -> remove_RestartRequested(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironment15_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalRestartRequestedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalRestartRequestedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalRestartRequestedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalRestartRequestedEventHandler = {0xa5d3e2ac,0xfee2,0x59c9,{0xbd,0x70,0x9e,0x68,0x18,0x1a,0x95,0xa1}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5d3e2ac-fee2-59c9-bd70-9e68181a95a1")
    ICoreWebView2ExperimentalRestartRequestedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2Environment *sender,
            /* [in] */ ICoreWebView2ExperimentalRestartRequestedEventArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalRestartRequestedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalRestartRequestedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalRestartRequestedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalRestartRequestedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalRestartRequestedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalRestartRequestedEventHandler * This,
            /* [in] */ ICoreWebView2Environment *sender,
            /* [in] */ ICoreWebView2ExperimentalRestartRequestedEventArgs *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalRestartRequestedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalRestartRequestedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalRestartRequestedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalRestartRequestedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalRestartRequestedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalRestartRequestedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalRestartRequestedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalRestartRequestedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironmentOptions_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironmentOptions_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironmentOptions */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironmentOptions = {0x2c0f597d,0x2958,0x5a94,{0x82,0xf9,0xc7,0x50,0xcf,0x86,0xcb,0x88}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2c0f597d-2958-5a94-82f9-c750cf86cb88")
    ICoreWebView2ExperimentalEnvironmentOptions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAllowedPortRange( 
            /* [in] */ COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE scope,
            /* [in] */ COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND protocol,
            /* [in] */ INT32 minPort,
            /* [in] */ INT32 maxPort) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEffectiveAllowedPortRange( 
            /* [in] */ COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE scope,
            /* [in] */ COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND protocol,
            /* [out] */ INT32 *minPort,
            /* [out] */ INT32 *maxPort) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironmentOptionsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironmentOptions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironmentOptions * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironmentOptions * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironmentOptions, SetAllowedPortRange)
        HRESULT ( STDMETHODCALLTYPE *SetAllowedPortRange )( 
            ICoreWebView2ExperimentalEnvironmentOptions * This,
            /* [in] */ COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE scope,
            /* [in] */ COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND protocol,
            /* [in] */ INT32 minPort,
            /* [in] */ INT32 maxPort);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironmentOptions, GetEffectiveAllowedPortRange)
        HRESULT ( STDMETHODCALLTYPE *GetEffectiveAllowedPortRange )( 
            ICoreWebView2ExperimentalEnvironmentOptions * This,
            /* [in] */ COREWEBVIEW2_ALLOWED_PORT_RANGE_SCOPE scope,
            /* [in] */ COREWEBVIEW2_TRANSPORT_PROTOCOL_KIND protocol,
            /* [out] */ INT32 *minPort,
            /* [out] */ INT32 *maxPort);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironmentOptionsVtbl;

    interface ICoreWebView2ExperimentalEnvironmentOptions
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironmentOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironmentOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironmentOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironmentOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironmentOptions_SetAllowedPortRange(This,scope,protocol,minPort,maxPort)	\
    ( (This)->lpVtbl -> SetAllowedPortRange(This,scope,protocol,minPort,maxPort) ) 

#define ICoreWebView2ExperimentalEnvironmentOptions_GetEffectiveAllowedPortRange(This,scope,protocol,minPort,maxPort)	\
    ( (This)->lpVtbl -> GetEffectiveAllowedPortRange(This,scope,protocol,minPort,maxPort) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironmentOptions_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalFrame7_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalFrame7_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalFrame7 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalFrame7 = {0x792db210,0x2297,0x54e6,{0x8c,0x57,0x0c,0xee,0x4d,0x38,0xcd,0x8b}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("792db210-2297-54e6-8c57-0cee4d38cd8b")
    ICoreWebView2ExperimentalFrame7 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UseOverrideTimerWakeInterval( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_UseOverrideTimerWakeInterval( 
            /* [in] */ BOOL value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalFrame7Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalFrame7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalFrame7 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalFrame7 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalFrame7, get_UseOverrideTimerWakeInterval)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseOverrideTimerWakeInterval )( 
            ICoreWebView2ExperimentalFrame7 * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalFrame7, put_UseOverrideTimerWakeInterval)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseOverrideTimerWakeInterval )( 
            ICoreWebView2ExperimentalFrame7 * This,
            /* [in] */ BOOL value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalFrame7Vtbl;

    interface ICoreWebView2ExperimentalFrame7
    {
        CONST_VTBL struct ICoreWebView2ExperimentalFrame7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalFrame7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalFrame7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalFrame7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalFrame7_get_UseOverrideTimerWakeInterval(This,value)	\
    ( (This)->lpVtbl -> get_UseOverrideTimerWakeInterval(This,value) ) 

#define ICoreWebView2ExperimentalFrame7_put_UseOverrideTimerWakeInterval(This,value)	\
    ( (This)->lpVtbl -> put_UseOverrideTimerWakeInterval(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalFrame7_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalMipSensitivityLabel_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalMipSensitivityLabel_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalMipSensitivityLabel */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalMipSensitivityLabel = {0x1a562888,0x3031,0x5375,{0xb8,0xc5,0x8a,0xfd,0x57,0x3e,0x79,0xc8}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1a562888-3031-5375-b8c5-8afd573e79c8")
    ICoreWebView2ExperimentalMipSensitivityLabel : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LabelId( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OrganizationId( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalMipSensitivityLabelVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalMipSensitivityLabel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalMipSensitivityLabel * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalMipSensitivityLabel * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalMipSensitivityLabel, get_LabelId)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LabelId )( 
            ICoreWebView2ExperimentalMipSensitivityLabel * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalMipSensitivityLabel, get_OrganizationId)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OrganizationId )( 
            ICoreWebView2ExperimentalMipSensitivityLabel * This,
            /* [retval][out] */ LPWSTR *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalMipSensitivityLabelVtbl;

    interface ICoreWebView2ExperimentalMipSensitivityLabel
    {
        CONST_VTBL struct ICoreWebView2ExperimentalMipSensitivityLabelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalMipSensitivityLabel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalMipSensitivityLabel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalMipSensitivityLabel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalMipSensitivityLabel_get_LabelId(This,value)	\
    ( (This)->lpVtbl -> get_LabelId(This,value) ) 

#define ICoreWebView2ExperimentalMipSensitivityLabel_get_OrganizationId(This,value)	\
    ( (This)->lpVtbl -> get_OrganizationId(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalMipSensitivityLabel_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalOriginFeatureSettingCollectionView */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalOriginFeatureSettingCollectionView = {0xf13210ed,0x3d4c,0x5d0c,{0x9a,0xfd,0x4d,0x99,0x4b,0x7b,0x56,0xc3}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f13210ed-3d4c-5d0c-9afd-4d994b7b56c3")
    ICoreWebView2ExperimentalOriginFeatureSettingCollectionView : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ UINT32 *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValueAtIndex( 
            /* [in] */ UINT32 index,
            /* [retval][out] */ ICoreWebView2ExperimentalOriginFeatureSetting **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalOriginFeatureSettingCollectionViewVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalOriginFeatureSettingCollectionView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalOriginFeatureSettingCollectionView * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalOriginFeatureSettingCollectionView * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalOriginFeatureSettingCollectionView, get_Count)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICoreWebView2ExperimentalOriginFeatureSettingCollectionView * This,
            /* [retval][out] */ UINT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalOriginFeatureSettingCollectionView, GetValueAtIndex)
        HRESULT ( STDMETHODCALLTYPE *GetValueAtIndex )( 
            ICoreWebView2ExperimentalOriginFeatureSettingCollectionView * This,
            /* [in] */ UINT32 index,
            /* [retval][out] */ ICoreWebView2ExperimentalOriginFeatureSetting **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalOriginFeatureSettingCollectionViewVtbl;

    interface ICoreWebView2ExperimentalOriginFeatureSettingCollectionView
    {
        CONST_VTBL struct ICoreWebView2ExperimentalOriginFeatureSettingCollectionViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_get_Count(This,value)	\
    ( (This)->lpVtbl -> get_Count(This,value) ) 

#define ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_GetValueAtIndex(This,index,value)	\
    ( (This)->lpVtbl -> GetValueAtIndex(This,index,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalOriginFeatureSettingCollectionView_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalOriginFeatureSetting_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalOriginFeatureSetting_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalOriginFeatureSetting */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalOriginFeatureSetting = {0x4f774652,0x5134,0x5065,{0x97,0x48,0xde,0xee,0xc5,0x77,0x85,0x2e}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4f774652-5134-5065-9748-deeec577852e")
    ICoreWebView2ExperimentalOriginFeatureSetting : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Feature( 
            /* [retval][out] */ COREWEBVIEW2_ORIGIN_FEATURE *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ COREWEBVIEW2_ORIGIN_FEATURE_STATE *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalOriginFeatureSettingVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalOriginFeatureSetting * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalOriginFeatureSetting * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalOriginFeatureSetting * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalOriginFeatureSetting, get_Feature)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Feature )( 
            ICoreWebView2ExperimentalOriginFeatureSetting * This,
            /* [retval][out] */ COREWEBVIEW2_ORIGIN_FEATURE *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalOriginFeatureSetting, get_State)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ICoreWebView2ExperimentalOriginFeatureSetting * This,
            /* [retval][out] */ COREWEBVIEW2_ORIGIN_FEATURE_STATE *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalOriginFeatureSettingVtbl;

    interface ICoreWebView2ExperimentalOriginFeatureSetting
    {
        CONST_VTBL struct ICoreWebView2ExperimentalOriginFeatureSettingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalOriginFeatureSetting_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalOriginFeatureSetting_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalOriginFeatureSetting_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalOriginFeatureSetting_get_Feature(This,value)	\
    ( (This)->lpVtbl -> get_Feature(This,value) ) 

#define ICoreWebView2ExperimentalOriginFeatureSetting_get_State(This,value)	\
    ( (This)->lpVtbl -> get_State(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalOriginFeatureSetting_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProcessFailedEventArgs2_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalProcessFailedEventArgs2_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalProcessFailedEventArgs2 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalProcessFailedEventArgs2 = {0xe7ef2283,0xaaea,0x5cf6,{0xb5,0xc5,0xdc,0x8c,0x50,0x35,0xb5,0x24}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e7ef2283-aaea-5cf6-b5c5-dc8c5035b524")
    ICoreWebView2ExperimentalProcessFailedEventArgs2 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CrashReport( 
            /* [retval][out] */ ICoreWebView2ExperimentalCrashReport **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalProcessFailedEventArgs2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalProcessFailedEventArgs2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalProcessFailedEventArgs2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalProcessFailedEventArgs2 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalProcessFailedEventArgs2, get_CrashReport)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CrashReport )( 
            ICoreWebView2ExperimentalProcessFailedEventArgs2 * This,
            /* [retval][out] */ ICoreWebView2ExperimentalCrashReport **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalProcessFailedEventArgs2Vtbl;

    interface ICoreWebView2ExperimentalProcessFailedEventArgs2
    {
        CONST_VTBL struct ICoreWebView2ExperimentalProcessFailedEventArgs2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalProcessFailedEventArgs2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalProcessFailedEventArgs2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalProcessFailedEventArgs2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalProcessFailedEventArgs2_get_CrashReport(This,value)	\
    ( (This)->lpVtbl -> get_CrashReport(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalProcessFailedEventArgs2_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile7_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalProfile7_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalProfile7 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalProfile7 = {0x11a14762,0x7780,0x46a1,{0xa1,0xc3,0x73,0xde,0x81,0x2d,0xae,0x12}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11a14762-7780-46a1-a1c3-73de812dae12")
    ICoreWebView2ExperimentalProfile7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ClearCustomDataPartition( 
            /* [in] */ LPCWSTR CustomDataPartitionId,
            /* [in] */ ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalProfile7Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalProfile7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalProfile7 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalProfile7 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalProfile7, ClearCustomDataPartition)
        HRESULT ( STDMETHODCALLTYPE *ClearCustomDataPartition )( 
            ICoreWebView2ExperimentalProfile7 * This,
            /* [in] */ LPCWSTR CustomDataPartitionId,
            /* [in] */ ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalProfile7Vtbl;

    interface ICoreWebView2ExperimentalProfile7
    {
        CONST_VTBL struct ICoreWebView2ExperimentalProfile7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalProfile7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalProfile7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalProfile7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalProfile7_ClearCustomDataPartition(This,CustomDataPartitionId,handler)	\
    ( (This)->lpVtbl -> ClearCustomDataPartition(This,CustomDataPartitionId,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalProfile7_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler = {0xfe753727,0x5758,0x4fea,{0x8c,0xad,0x1e,0x68,0x5b,0x9c,0x3a,0xe8}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fe753727-5758-4fea-8cad-1e685b9c3ae8")
    ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler * This,
            /* [in] */ HRESULT errorCode);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_Invoke(This,errorCode)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile14_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalProfile14_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalProfile14 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalProfile14 = {0x591ffebf,0x33d9,0x5e0f,{0x84,0x7b,0xc1,0x4f,0x00,0x1d,0x26,0x07}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("591ffebf-33d9-5e0f-847b-c14f001d2607")
    ICoreWebView2ExperimentalProfile14 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPageInteractionRestrictionManagerAllowList( 
            /* [in] */ UINT32 allowlistCount,
            /* [in] */ LPCWSTR *allowlist) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalProfile14Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalProfile14 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalProfile14 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalProfile14 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalProfile14, SetPageInteractionRestrictionManagerAllowList)
        HRESULT ( STDMETHODCALLTYPE *SetPageInteractionRestrictionManagerAllowList )( 
            ICoreWebView2ExperimentalProfile14 * This,
            /* [in] */ UINT32 allowlistCount,
            /* [in] */ LPCWSTR *allowlist);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalProfile14Vtbl;

    interface ICoreWebView2ExperimentalProfile14
    {
        CONST_VTBL struct ICoreWebView2ExperimentalProfile14Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalProfile14_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalProfile14_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalProfile14_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalProfile14_SetPageInteractionRestrictionManagerAllowList(This,allowlistCount,allowlist)	\
    ( (This)->lpVtbl -> SetPageInteractionRestrictionManagerAllowList(This,allowlistCount,allowlist) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalProfile14_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile16_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalProfile16_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalProfile16 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalProfile16 = {0x9234b39e,0xe9d7,0x5f73,{0x88,0xd8,0x64,0x13,0x61,0x2b,0xa0,0x9b}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9234b39e-e9d7-5f73-88d8-6413612ba09b")
    ICoreWebView2ExperimentalProfile16 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateOriginFeatureSetting( 
            /* [in] */ COREWEBVIEW2_ORIGIN_FEATURE featureKind,
            /* [in] */ COREWEBVIEW2_ORIGIN_FEATURE_STATE featureState,
            /* [retval][out] */ ICoreWebView2ExperimentalOriginFeatureSetting **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOriginFeatures( 
            /* [in] */ UINT32 originsCount,
            /* [in] */ LPCWSTR *originPatterns,
            /* [in] */ UINT32 featureSettingsCount,
            /* [in] */ ICoreWebView2ExperimentalOriginFeatureSetting **featureSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEffectiveFeaturesForOrigin( 
            /* [in] */ LPCWSTR origin,
            /* [in] */ ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalProfile16Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalProfile16 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalProfile16 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalProfile16 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalProfile16, CreateOriginFeatureSetting)
        HRESULT ( STDMETHODCALLTYPE *CreateOriginFeatureSetting )( 
            ICoreWebView2ExperimentalProfile16 * This,
            /* [in] */ COREWEBVIEW2_ORIGIN_FEATURE featureKind,
            /* [in] */ COREWEBVIEW2_ORIGIN_FEATURE_STATE featureState,
            /* [retval][out] */ ICoreWebView2ExperimentalOriginFeatureSetting **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalProfile16, SetOriginFeatures)
        HRESULT ( STDMETHODCALLTYPE *SetOriginFeatures )( 
            ICoreWebView2ExperimentalProfile16 * This,
            /* [in] */ UINT32 originsCount,
            /* [in] */ LPCWSTR *originPatterns,
            /* [in] */ UINT32 featureSettingsCount,
            /* [in] */ ICoreWebView2ExperimentalOriginFeatureSetting **featureSettings);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalProfile16, GetEffectiveFeaturesForOrigin)
        HRESULT ( STDMETHODCALLTYPE *GetEffectiveFeaturesForOrigin )( 
            ICoreWebView2ExperimentalProfile16 * This,
            /* [in] */ LPCWSTR origin,
            /* [in] */ ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalProfile16Vtbl;

    interface ICoreWebView2ExperimentalProfile16
    {
        CONST_VTBL struct ICoreWebView2ExperimentalProfile16Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalProfile16_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalProfile16_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalProfile16_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalProfile16_CreateOriginFeatureSetting(This,featureKind,featureState,value)	\
    ( (This)->lpVtbl -> CreateOriginFeatureSetting(This,featureKind,featureState,value) ) 

#define ICoreWebView2ExperimentalProfile16_SetOriginFeatures(This,originsCount,originPatterns,featureSettingsCount,featureSettings)	\
    ( (This)->lpVtbl -> SetOriginFeatures(This,originsCount,originPatterns,featureSettingsCount,featureSettings) ) 

#define ICoreWebView2ExperimentalProfile16_GetEffectiveFeaturesForOrigin(This,origin,handler)	\
    ( (This)->lpVtbl -> GetEffectiveFeaturesForOrigin(This,origin,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalProfile16_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler = {0x4e5d6c7b,0x8a9f,0x0e1d,{0x2c,0x3b,0x4a,0x5e,0x6d,0x7c,0x8b,0x9a}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4e5d6c7b-8a9f-0e1d-2c3b-4a5e6d7c8b9a")
    ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalOriginFeatureSettingCollectionView *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler * This,
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalOriginFeatureSettingCollectionView *result);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler_Invoke(This,errorCode,result)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalGetEffectiveFeaturesForOriginCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile17_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalProfile17_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalProfile17 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalProfile17 = {0x9e84633f,0x4631,0x51a1,{0x91,0x97,0xb3,0xa4,0x69,0xa4,0x24,0x6a}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9e84633f-4631-51a1-9197-b3a469a4246a")
    ICoreWebView2ExperimentalProfile17 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnhancedSecurityModeState( 
            /* [retval][out] */ COREWEBVIEW2_ENHANCED_SECURITY_MODE_STATE *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EnhancedSecurityModeState( 
            /* [in] */ COREWEBVIEW2_ENHANCED_SECURITY_MODE_STATE value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalProfile17Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalProfile17 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalProfile17 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalProfile17 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalProfile17, get_EnhancedSecurityModeState)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnhancedSecurityModeState )( 
            ICoreWebView2ExperimentalProfile17 * This,
            /* [retval][out] */ COREWEBVIEW2_ENHANCED_SECURITY_MODE_STATE *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalProfile17, put_EnhancedSecurityModeState)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnhancedSecurityModeState )( 
            ICoreWebView2ExperimentalProfile17 * This,
            /* [in] */ COREWEBVIEW2_ENHANCED_SECURITY_MODE_STATE value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalProfile17Vtbl;

    interface ICoreWebView2ExperimentalProfile17
    {
        CONST_VTBL struct ICoreWebView2ExperimentalProfile17Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalProfile17_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalProfile17_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalProfile17_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalProfile17_get_EnhancedSecurityModeState(This,value)	\
    ( (This)->lpVtbl -> get_EnhancedSecurityModeState(This,value) ) 

#define ICoreWebView2ExperimentalProfile17_put_EnhancedSecurityModeState(This,value)	\
    ( (This)->lpVtbl -> put_EnhancedSecurityModeState(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalProfile17_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalRestartRequestedEventArgs_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalRestartRequestedEventArgs_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalRestartRequestedEventArgs */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalRestartRequestedEventArgs = {0x40bb5778,0x6d85,0x5008,{0xbb,0xf4,0x22,0xcc,0x80,0x8b,0x27,0x37}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40bb5778-6d85-5008-bbf4-22cc808b2737")
    ICoreWebView2ExperimentalRestartRequestedEventArgs : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ COREWEBVIEW2_RESTART_REQUESTED_PRIORITY *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalRestartRequestedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalRestartRequestedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalRestartRequestedEventArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalRestartRequestedEventArgs * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalRestartRequestedEventArgs, get_Priority)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            ICoreWebView2ExperimentalRestartRequestedEventArgs * This,
            /* [retval][out] */ COREWEBVIEW2_RESTART_REQUESTED_PRIORITY *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalRestartRequestedEventArgsVtbl;

    interface ICoreWebView2ExperimentalRestartRequestedEventArgs
    {
        CONST_VTBL struct ICoreWebView2ExperimentalRestartRequestedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalRestartRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalRestartRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalRestartRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalRestartRequestedEventArgs_get_Priority(This,value)	\
    ( (This)->lpVtbl -> get_Priority(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalRestartRequestedEventArgs_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSensitivityInfo_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSensitivityInfo_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSensitivityInfo */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSensitivityInfo = {0x262ac1ce,0x8b69,0x5773,{0xb7,0xfa,0xd8,0x32,0xeb,0x50,0xdc,0x05}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("262ac1ce-8b69-5773-b7fa-d832eb50dc05")
    ICoreWebView2ExperimentalSensitivityInfo : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SensitivityLabels( 
            /* [retval][out] */ ICoreWebView2ExperimentalSensitivityLabelCollectionView **value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SensitivityLabelsState( 
            /* [retval][out] */ COREWEBVIEW2_SENSITIVITY_LABELS_STATE *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSensitivityInfoVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSensitivityInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSensitivityInfo * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSensitivityInfo * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSensitivityInfo, get_SensitivityLabels)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SensitivityLabels )( 
            ICoreWebView2ExperimentalSensitivityInfo * This,
            /* [retval][out] */ ICoreWebView2ExperimentalSensitivityLabelCollectionView **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSensitivityInfo, get_SensitivityLabelsState)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SensitivityLabelsState )( 
            ICoreWebView2ExperimentalSensitivityInfo * This,
            /* [retval][out] */ COREWEBVIEW2_SENSITIVITY_LABELS_STATE *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSensitivityInfoVtbl;

    interface ICoreWebView2ExperimentalSensitivityInfo
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSensitivityInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSensitivityInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSensitivityInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSensitivityInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSensitivityInfo_get_SensitivityLabels(This,value)	\
    ( (This)->lpVtbl -> get_SensitivityLabels(This,value) ) 

#define ICoreWebView2ExperimentalSensitivityInfo_get_SensitivityLabelsState(This,value)	\
    ( (This)->lpVtbl -> get_SensitivityLabelsState(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSensitivityInfo_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSensitivityLabelCollectionView_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSensitivityLabelCollectionView_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSensitivityLabelCollectionView */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSensitivityLabelCollectionView = {0xd308e652,0x8a72,0x5b4f,{0xbc,0xe4,0xa6,0x8d,0xfc,0x1e,0xf7,0x92}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d308e652-8a72-5b4f-bce4-a68dfc1ef792")
    ICoreWebView2ExperimentalSensitivityLabelCollectionView : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ UINT32 *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValueAtIndex( 
            /* [in] */ UINT32 index,
            /* [retval][out] */ ICoreWebView2ExperimentalSensitivityLabel **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSensitivityLabelCollectionViewVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSensitivityLabelCollectionView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSensitivityLabelCollectionView * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSensitivityLabelCollectionView * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSensitivityLabelCollectionView, get_Count)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICoreWebView2ExperimentalSensitivityLabelCollectionView * This,
            /* [retval][out] */ UINT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSensitivityLabelCollectionView, GetValueAtIndex)
        HRESULT ( STDMETHODCALLTYPE *GetValueAtIndex )( 
            ICoreWebView2ExperimentalSensitivityLabelCollectionView * This,
            /* [in] */ UINT32 index,
            /* [retval][out] */ ICoreWebView2ExperimentalSensitivityLabel **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSensitivityLabelCollectionViewVtbl;

    interface ICoreWebView2ExperimentalSensitivityLabelCollectionView
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSensitivityLabelCollectionViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSensitivityLabelCollectionView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSensitivityLabelCollectionView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSensitivityLabelCollectionView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSensitivityLabelCollectionView_get_Count(This,value)	\
    ( (This)->lpVtbl -> get_Count(This,value) ) 

#define ICoreWebView2ExperimentalSensitivityLabelCollectionView_GetValueAtIndex(This,index,value)	\
    ( (This)->lpVtbl -> GetValueAtIndex(This,index,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSensitivityLabelCollectionView_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSensitivityLabel_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSensitivityLabel_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSensitivityLabel */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSensitivityLabel = {0x5c27e6f2,0xbaa6,0x5646,{0xb7,0x26,0xdb,0x80,0xa7,0x7b,0x73,0x45}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5c27e6f2-baa6-5646-b726-db80a77b7345")
    ICoreWebView2ExperimentalSensitivityLabel : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LabelKind( 
            /* [retval][out] */ COREWEBVIEW2_SENSITIVITY_LABEL_KIND *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSensitivityLabelVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSensitivityLabel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSensitivityLabel * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSensitivityLabel * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSensitivityLabel, get_LabelKind)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LabelKind )( 
            ICoreWebView2ExperimentalSensitivityLabel * This,
            /* [retval][out] */ COREWEBVIEW2_SENSITIVITY_LABEL_KIND *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSensitivityLabelVtbl;

    interface ICoreWebView2ExperimentalSensitivityLabel
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSensitivityLabelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSensitivityLabel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSensitivityLabel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSensitivityLabel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSensitivityLabel_get_LabelKind(This,value)	\
    ( (This)->lpVtbl -> get_LabelKind(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSensitivityLabel_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSettings9_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSettings9_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSettings9 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSettings9 = {0x0a4cf350,0xb8ab,0x5821,{0x81,0xb0,0x9c,0x58,0xa5,0x92,0x42,0x3f}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0a4cf350-b8ab-5821-81b0-9c58a592423f")
    ICoreWebView2ExperimentalSettings9 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreferredBackgroundTimerWakeIntervalInMilliseconds( 
            /* [retval][out] */ INT32 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PreferredBackgroundTimerWakeIntervalInMilliseconds( 
            /* [in] */ INT32 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreferredForegroundTimerWakeIntervalInMilliseconds( 
            /* [retval][out] */ INT32 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PreferredForegroundTimerWakeIntervalInMilliseconds( 
            /* [in] */ INT32 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreferredIntensiveTimerWakeIntervalInMilliseconds( 
            /* [retval][out] */ INT32 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PreferredIntensiveTimerWakeIntervalInMilliseconds( 
            /* [in] */ INT32 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreferredOverrideTimerWakeIntervalInMilliseconds( 
            /* [retval][out] */ INT32 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PreferredOverrideTimerWakeIntervalInMilliseconds( 
            /* [in] */ INT32 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSettings9Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSettings9 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSettings9 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSettings9 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSettings9, get_PreferredBackgroundTimerWakeIntervalInMilliseconds)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreferredBackgroundTimerWakeIntervalInMilliseconds )( 
            ICoreWebView2ExperimentalSettings9 * This,
            /* [retval][out] */ INT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSettings9, put_PreferredBackgroundTimerWakeIntervalInMilliseconds)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreferredBackgroundTimerWakeIntervalInMilliseconds )( 
            ICoreWebView2ExperimentalSettings9 * This,
            /* [in] */ INT32 value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSettings9, get_PreferredForegroundTimerWakeIntervalInMilliseconds)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreferredForegroundTimerWakeIntervalInMilliseconds )( 
            ICoreWebView2ExperimentalSettings9 * This,
            /* [retval][out] */ INT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSettings9, put_PreferredForegroundTimerWakeIntervalInMilliseconds)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreferredForegroundTimerWakeIntervalInMilliseconds )( 
            ICoreWebView2ExperimentalSettings9 * This,
            /* [in] */ INT32 value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSettings9, get_PreferredIntensiveTimerWakeIntervalInMilliseconds)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreferredIntensiveTimerWakeIntervalInMilliseconds )( 
            ICoreWebView2ExperimentalSettings9 * This,
            /* [retval][out] */ INT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSettings9, put_PreferredIntensiveTimerWakeIntervalInMilliseconds)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreferredIntensiveTimerWakeIntervalInMilliseconds )( 
            ICoreWebView2ExperimentalSettings9 * This,
            /* [in] */ INT32 value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSettings9, get_PreferredOverrideTimerWakeIntervalInMilliseconds)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreferredOverrideTimerWakeIntervalInMilliseconds )( 
            ICoreWebView2ExperimentalSettings9 * This,
            /* [retval][out] */ INT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSettings9, put_PreferredOverrideTimerWakeIntervalInMilliseconds)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreferredOverrideTimerWakeIntervalInMilliseconds )( 
            ICoreWebView2ExperimentalSettings9 * This,
            /* [in] */ INT32 value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSettings9Vtbl;

    interface ICoreWebView2ExperimentalSettings9
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSettings9Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSettings9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSettings9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSettings9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSettings9_get_PreferredBackgroundTimerWakeIntervalInMilliseconds(This,value)	\
    ( (This)->lpVtbl -> get_PreferredBackgroundTimerWakeIntervalInMilliseconds(This,value) ) 

#define ICoreWebView2ExperimentalSettings9_put_PreferredBackgroundTimerWakeIntervalInMilliseconds(This,value)	\
    ( (This)->lpVtbl -> put_PreferredBackgroundTimerWakeIntervalInMilliseconds(This,value) ) 

#define ICoreWebView2ExperimentalSettings9_get_PreferredForegroundTimerWakeIntervalInMilliseconds(This,value)	\
    ( (This)->lpVtbl -> get_PreferredForegroundTimerWakeIntervalInMilliseconds(This,value) ) 

#define ICoreWebView2ExperimentalSettings9_put_PreferredForegroundTimerWakeIntervalInMilliseconds(This,value)	\
    ( (This)->lpVtbl -> put_PreferredForegroundTimerWakeIntervalInMilliseconds(This,value) ) 

#define ICoreWebView2ExperimentalSettings9_get_PreferredIntensiveTimerWakeIntervalInMilliseconds(This,value)	\
    ( (This)->lpVtbl -> get_PreferredIntensiveTimerWakeIntervalInMilliseconds(This,value) ) 

#define ICoreWebView2ExperimentalSettings9_put_PreferredIntensiveTimerWakeIntervalInMilliseconds(This,value)	\
    ( (This)->lpVtbl -> put_PreferredIntensiveTimerWakeIntervalInMilliseconds(This,value) ) 

#define ICoreWebView2ExperimentalSettings9_get_PreferredOverrideTimerWakeIntervalInMilliseconds(This,value)	\
    ( (This)->lpVtbl -> get_PreferredOverrideTimerWakeIntervalInMilliseconds(This,value) ) 

#define ICoreWebView2ExperimentalSettings9_put_PreferredOverrideTimerWakeIntervalInMilliseconds(This,value)	\
    ( (This)->lpVtbl -> put_PreferredOverrideTimerWakeIntervalInMilliseconds(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSettings9_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTexture_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTexture_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTexture */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTexture = {0x0836f09c,0x34bd,0x47bf,{0x91,0x4a,0x99,0xfb,0x56,0xae,0x2d,0x07}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0836f09c-34bd-47bf-914a-99fb56ae2d07")
    ICoreWebView2ExperimentalTexture : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Handle( 
            /* [retval][out] */ HANDLE *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Resource( 
            /* [retval][out] */ IUnknown **value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Timestamp( 
            /* [retval][out] */ UINT64 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Timestamp( 
            /* [in] */ UINT64 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTexture * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTexture * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTexture * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTexture, get_Handle)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Handle )( 
            ICoreWebView2ExperimentalTexture * This,
            /* [retval][out] */ HANDLE *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTexture, get_Resource)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resource )( 
            ICoreWebView2ExperimentalTexture * This,
            /* [retval][out] */ IUnknown **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTexture, get_Timestamp)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timestamp )( 
            ICoreWebView2ExperimentalTexture * This,
            /* [retval][out] */ UINT64 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTexture, put_Timestamp)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timestamp )( 
            ICoreWebView2ExperimentalTexture * This,
            /* [in] */ UINT64 value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureVtbl;

    interface ICoreWebView2ExperimentalTexture
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTexture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTexture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTexture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTexture_get_Handle(This,value)	\
    ( (This)->lpVtbl -> get_Handle(This,value) ) 

#define ICoreWebView2ExperimentalTexture_get_Resource(This,value)	\
    ( (This)->lpVtbl -> get_Resource(This,value) ) 

#define ICoreWebView2ExperimentalTexture_get_Timestamp(This,value)	\
    ( (This)->lpVtbl -> get_Timestamp(This,value) ) 

#define ICoreWebView2ExperimentalTexture_put_Timestamp(This,value)	\
    ( (This)->lpVtbl -> put_Timestamp(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTexture_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStream_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStream_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStream */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStream = {0xafca8431,0x633f,0x4528,{0xab,0xfe,0x7f,0xc3,0xbe,0xdd,0x89,0x62}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("afca8431-633f-4528-abfe-7fc3bedd8962")
    ICoreWebView2ExperimentalTextureStream : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddAllowedOrigin( 
            /* [in] */ LPCWSTR origin,
            /* [in] */ BOOL value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllowedOrigin( 
            /* [in] */ LPCWSTR origin) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_StartRequested( 
            /* [in] */ ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_StartRequested( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_Stopped( 
            /* [in] */ ICoreWebView2ExperimentalTextureStreamStoppedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_Stopped( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTexture( 
            /* [in] */ UINT32 widthInTexels,
            /* [in] */ UINT32 heightInTexels,
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **texture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAvailableTexture( 
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **texture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseTexture( 
            /* [in] */ ICoreWebView2ExperimentalTexture *texture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PresentTexture( 
            /* [in] */ ICoreWebView2ExperimentalTexture *texture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_ErrorReceived( 
            /* [in] */ ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_ErrorReceived( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetD3DDevice( 
            /* [in] */ IUnknown *d3dDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_WebTextureReceived( 
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_WebTextureReceived( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_WebTextureStreamStopped( 
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_WebTextureStreamStopped( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStream * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStream * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, get_Id)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, AddAllowedOrigin)
        HRESULT ( STDMETHODCALLTYPE *AddAllowedOrigin )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ LPCWSTR origin,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, RemoveAllowedOrigin)
        HRESULT ( STDMETHODCALLTYPE *RemoveAllowedOrigin )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ LPCWSTR origin);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, add_StartRequested)
        HRESULT ( STDMETHODCALLTYPE *add_StartRequested )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, remove_StartRequested)
        HRESULT ( STDMETHODCALLTYPE *remove_StartRequested )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ EventRegistrationToken token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, add_Stopped)
        HRESULT ( STDMETHODCALLTYPE *add_Stopped )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamStoppedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, remove_Stopped)
        HRESULT ( STDMETHODCALLTYPE *remove_Stopped )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ EventRegistrationToken token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, CreateTexture)
        HRESULT ( STDMETHODCALLTYPE *CreateTexture )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ UINT32 widthInTexels,
            /* [in] */ UINT32 heightInTexels,
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **texture);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, GetAvailableTexture)
        HRESULT ( STDMETHODCALLTYPE *GetAvailableTexture )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **texture);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, CloseTexture)
        HRESULT ( STDMETHODCALLTYPE *CloseTexture )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTexture *texture);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, PresentTexture)
        HRESULT ( STDMETHODCALLTYPE *PresentTexture )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTexture *texture);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, Stop)
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            ICoreWebView2ExperimentalTextureStream * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, add_ErrorReceived)
        HRESULT ( STDMETHODCALLTYPE *add_ErrorReceived )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, remove_ErrorReceived)
        HRESULT ( STDMETHODCALLTYPE *remove_ErrorReceived )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ EventRegistrationToken token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, SetD3DDevice)
        HRESULT ( STDMETHODCALLTYPE *SetD3DDevice )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ IUnknown *d3dDevice);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, add_WebTextureReceived)
        HRESULT ( STDMETHODCALLTYPE *add_WebTextureReceived )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, remove_WebTextureReceived)
        HRESULT ( STDMETHODCALLTYPE *remove_WebTextureReceived )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ EventRegistrationToken token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, add_WebTextureStreamStopped)
        HRESULT ( STDMETHODCALLTYPE *add_WebTextureStreamStopped )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, remove_WebTextureStreamStopped)
        HRESULT ( STDMETHODCALLTYPE *remove_WebTextureStreamStopped )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamVtbl;

    interface ICoreWebView2ExperimentalTextureStream
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStream_get_Id(This,value)	\
    ( (This)->lpVtbl -> get_Id(This,value) ) 

#define ICoreWebView2ExperimentalTextureStream_AddAllowedOrigin(This,origin,value)	\
    ( (This)->lpVtbl -> AddAllowedOrigin(This,origin,value) ) 

#define ICoreWebView2ExperimentalTextureStream_RemoveAllowedOrigin(This,origin)	\
    ( (This)->lpVtbl -> RemoveAllowedOrigin(This,origin) ) 

#define ICoreWebView2ExperimentalTextureStream_add_StartRequested(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_StartRequested(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalTextureStream_remove_StartRequested(This,token)	\
    ( (This)->lpVtbl -> remove_StartRequested(This,token) ) 

#define ICoreWebView2ExperimentalTextureStream_add_Stopped(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_Stopped(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalTextureStream_remove_Stopped(This,token)	\
    ( (This)->lpVtbl -> remove_Stopped(This,token) ) 

#define ICoreWebView2ExperimentalTextureStream_CreateTexture(This,widthInTexels,heightInTexels,texture)	\
    ( (This)->lpVtbl -> CreateTexture(This,widthInTexels,heightInTexels,texture) ) 

#define ICoreWebView2ExperimentalTextureStream_GetAvailableTexture(This,texture)	\
    ( (This)->lpVtbl -> GetAvailableTexture(This,texture) ) 

#define ICoreWebView2ExperimentalTextureStream_CloseTexture(This,texture)	\
    ( (This)->lpVtbl -> CloseTexture(This,texture) ) 

#define ICoreWebView2ExperimentalTextureStream_PresentTexture(This,texture)	\
    ( (This)->lpVtbl -> PresentTexture(This,texture) ) 

#define ICoreWebView2ExperimentalTextureStream_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define ICoreWebView2ExperimentalTextureStream_add_ErrorReceived(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_ErrorReceived(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalTextureStream_remove_ErrorReceived(This,token)	\
    ( (This)->lpVtbl -> remove_ErrorReceived(This,token) ) 

#define ICoreWebView2ExperimentalTextureStream_SetD3DDevice(This,d3dDevice)	\
    ( (This)->lpVtbl -> SetD3DDevice(This,d3dDevice) ) 

#define ICoreWebView2ExperimentalTextureStream_add_WebTextureReceived(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_WebTextureReceived(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalTextureStream_remove_WebTextureReceived(This,token)	\
    ( (This)->lpVtbl -> remove_WebTextureReceived(This,token) ) 

#define ICoreWebView2ExperimentalTextureStream_add_WebTextureStreamStopped(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_WebTextureStreamStopped(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalTextureStream_remove_WebTextureStreamStopped(This,token)	\
    ( (This)->lpVtbl -> remove_WebTextureStreamStopped(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStream_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler = {0x52cb8898,0xc711,0x401a,{0x8f,0x97,0x36,0x46,0x83,0x1b,0xa7,0x2d}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52cb8898-c711-401a-8f97-3646831ba72d")
    ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler = {0x62d09330,0x00a9,0x41bf,{0xa9,0xae,0x55,0xaa,0xef,0x8b,0x3c,0x44}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62d09330-00a9-41bf-a9ae-55aaef8b3c44")
    ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamStoppedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamStoppedEventHandler = {0x4111102a,0xd19f,0x4438,{0xaf,0x46,0xef,0xc5,0x63,0xb2,0xb9,0xcf}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4111102a-d19f-4438-af46-efc563b2b9cf")
    ICoreWebView2ExperimentalTextureStreamStoppedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamStoppedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamStoppedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamStoppedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamStoppedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamStoppedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalTextureStreamStoppedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamStoppedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalTextureStreamStoppedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamStoppedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler = {0x9ea4228c,0x295a,0x11ed,{0xa2,0x61,0x02,0x42,0xac,0x12,0x00,0x02}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9ea4228c-295a-11ed-a261-0242ac120002")
    ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler = {0x77eb4638,0x2f05,0x11ed,{0xa2,0x61,0x02,0x42,0xac,0x12,0x00,0x02}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77eb4638-2f05-11ed-a261-0242ac120002")
    ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs = {0x0e1730c1,0x03df,0x4ad2,{0xb8,0x47,0xbe,0x4d,0x63,0xad,0xf7,0x00}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0e1730c1-03df-4ad2-b847-be4d63adf700")
    ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Kind( 
            /* [retval][out] */ COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Texture( 
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs, get_Kind)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Kind )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs * This,
            /* [retval][out] */ COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs, get_Texture)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Texture )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs * This,
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgsVtbl;

    interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_get_Kind(This,value)	\
    ( (This)->lpVtbl -> get_Kind(This,value) ) 

#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_get_Texture(This,value)	\
    ( (This)->lpVtbl -> get_Texture(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs = {0xa4c2fa3a,0x295a,0x11ed,{0xa2,0x61,0x02,0x42,0xac,0x12,0x00,0x02}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a4c2fa3a-295a-11ed-a261-0242ac120002")
    ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WebTexture( 
            /* [retval][out] */ ICoreWebView2ExperimentalWebTexture **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs, get_WebTexture)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WebTexture )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs * This,
            /* [retval][out] */ ICoreWebView2ExperimentalWebTexture **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgsVtbl;

    interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_get_WebTexture(This,value)	\
    ( (This)->lpVtbl -> get_WebTexture(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalUpdateRuntimeResult */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalUpdateRuntimeResult = {0xDD503E49,0xAB19,0x47C0,{0xB2,0xAD,0x6D,0xDD,0x09,0xCC,0x3E,0x3A}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD503E49-AB19-47C0-B2AD-6DDD09CC3E3A")
    ICoreWebView2ExperimentalUpdateRuntimeResult : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ COREWEBVIEW2_UPDATE_RUNTIME_STATUS *status) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedError( 
            /* [retval][out] */ HRESULT *error) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalUpdateRuntimeResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalUpdateRuntimeResult, get_Status)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [retval][out] */ COREWEBVIEW2_UPDATE_RUNTIME_STATUS *status);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalUpdateRuntimeResult, get_ExtendedError)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [retval][out] */ HRESULT *error);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalUpdateRuntimeResultVtbl;

    interface ICoreWebView2ExperimentalUpdateRuntimeResult
    {
        CONST_VTBL struct ICoreWebView2ExperimentalUpdateRuntimeResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalUpdateRuntimeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalUpdateRuntimeResult_get_Status(This,status)	\
    ( (This)->lpVtbl -> get_Status(This,status) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_get_ExtendedError(This,error)	\
    ( (This)->lpVtbl -> get_ExtendedError(This,error) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalWebTexture_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalWebTexture_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalWebTexture */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalWebTexture = {0xb94265ae,0x4c1e,0x11ed,{0xbd,0xc3,0x02,0x42,0xac,0x12,0x00,0x02}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b94265ae-4c1e-11ed-bdc3-0242ac120002")
    ICoreWebView2ExperimentalWebTexture : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Handle( 
            /* [retval][out] */ HANDLE *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Resource( 
            /* [retval][out] */ IUnknown **value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Timestamp( 
            /* [retval][out] */ UINT64 *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalWebTextureVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalWebTexture * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalWebTexture * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalWebTexture * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWebTexture, get_Handle)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Handle )( 
            ICoreWebView2ExperimentalWebTexture * This,
            /* [retval][out] */ HANDLE *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWebTexture, get_Resource)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resource )( 
            ICoreWebView2ExperimentalWebTexture * This,
            /* [retval][out] */ IUnknown **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWebTexture, get_Timestamp)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timestamp )( 
            ICoreWebView2ExperimentalWebTexture * This,
            /* [retval][out] */ UINT64 *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalWebTextureVtbl;

    interface ICoreWebView2ExperimentalWebTexture
    {
        CONST_VTBL struct ICoreWebView2ExperimentalWebTextureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalWebTexture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalWebTexture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalWebTexture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalWebTexture_get_Handle(This,value)	\
    ( (This)->lpVtbl -> get_Handle(This,value) ) 

#define ICoreWebView2ExperimentalWebTexture_get_Resource(This,value)	\
    ( (This)->lpVtbl -> get_Resource(This,value) ) 

#define ICoreWebView2ExperimentalWebTexture_get_Timestamp(This,value)	\
    ( (This)->lpVtbl -> get_Timestamp(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalWebTexture_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalWindowControlsOverlay_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalWindowControlsOverlay_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalWindowControlsOverlay */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalWindowControlsOverlay = {0x69854fbf,0x8515,0x58cd,{0x88,0x1c,0x49,0xdb,0x61,0x0c,0x8f,0xbe}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("69854fbf-8515-58cd-881c-49db610c8fbe")
    ICoreWebView2ExperimentalWindowControlsOverlay : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BackgroundColor( 
            /* [retval][out] */ COREWEBVIEW2_COLOR *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BackgroundColor( 
            /* [in] */ COREWEBVIEW2_COLOR value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ UINT32 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ UINT32 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsEnabled( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsEnabled( 
            /* [in] */ BOOL value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalWindowControlsOverlayVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalWindowControlsOverlay * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalWindowControlsOverlay * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalWindowControlsOverlay * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWindowControlsOverlay, get_BackgroundColor)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            ICoreWebView2ExperimentalWindowControlsOverlay * This,
            /* [retval][out] */ COREWEBVIEW2_COLOR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWindowControlsOverlay, put_BackgroundColor)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )( 
            ICoreWebView2ExperimentalWindowControlsOverlay * This,
            /* [in] */ COREWEBVIEW2_COLOR value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWindowControlsOverlay, get_Height)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            ICoreWebView2ExperimentalWindowControlsOverlay * This,
            /* [retval][out] */ UINT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWindowControlsOverlay, put_Height)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            ICoreWebView2ExperimentalWindowControlsOverlay * This,
            /* [in] */ UINT32 value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWindowControlsOverlay, get_IsEnabled)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )( 
            ICoreWebView2ExperimentalWindowControlsOverlay * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWindowControlsOverlay, put_IsEnabled)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )( 
            ICoreWebView2ExperimentalWindowControlsOverlay * This,
            /* [in] */ BOOL value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalWindowControlsOverlayVtbl;

    interface ICoreWebView2ExperimentalWindowControlsOverlay
    {
        CONST_VTBL struct ICoreWebView2ExperimentalWindowControlsOverlayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalWindowControlsOverlay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalWindowControlsOverlay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalWindowControlsOverlay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalWindowControlsOverlay_get_BackgroundColor(This,value)	\
    ( (This)->lpVtbl -> get_BackgroundColor(This,value) ) 

#define ICoreWebView2ExperimentalWindowControlsOverlay_put_BackgroundColor(This,value)	\
    ( (This)->lpVtbl -> put_BackgroundColor(This,value) ) 

#define ICoreWebView2ExperimentalWindowControlsOverlay_get_Height(This,value)	\
    ( (This)->lpVtbl -> get_Height(This,value) ) 

#define ICoreWebView2ExperimentalWindowControlsOverlay_put_Height(This,value)	\
    ( (This)->lpVtbl -> put_Height(This,value) ) 

#define ICoreWebView2ExperimentalWindowControlsOverlay_get_IsEnabled(This,value)	\
    ( (This)->lpVtbl -> get_IsEnabled(This,value) ) 

#define ICoreWebView2ExperimentalWindowControlsOverlay_put_IsEnabled(This,value)	\
    ( (This)->lpVtbl -> put_IsEnabled(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalWindowControlsOverlay_INTERFACE_DEFINED__ */

#endif /* __WebView2Experimental_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


