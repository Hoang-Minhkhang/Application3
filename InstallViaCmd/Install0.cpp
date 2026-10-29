
#include<iostream> 
#include <windows.h>
#include <urlmon.h>

#pragma comment(lib, "urlmon.lib")
using namespace std ; 
int main (){
    
    cout <<"Install Application3 Via Command Line - HoangMinhKhang Application3  " << endl;
    cout <<"What Type of application do you want to install " << endl ;
    cout << "================================" << endl ;
    cout << "Please type 1 for install application3 and 2 for Exit " << endl ;
    int choice ;    
    cin >> choice ;
    if (choice == 1){
        cout << "Installing Application3" << endl ; 
         cout << "Downloading Application3..." << endl;

    system(
        "powershell -ExecutionPolicy Bypass -Command "
        "\"Invoke-WebRequest "
        "-Uri 'https://raw.githubusercontent.com/Hoang-Minhkhang/Application3/main/app.publish/Application3.application' "
        "-OutFile 'Application3.application'\""
    );

    cout << "Done." << endl ; 
    system("start Application3.application");
   
    }
    

    else if (choice == 2){
        cout << "Exiting the installation process" << endl ; 
        return 0 ; 
    }
    else {
        cout << "Invalid choice. Please try again." << endl ; 
    }
}