/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// AdbWinApi.cpp : Implementation of DLL Exports.

#include "stdafx.h"
#include "adb_api.h"
#include "adb_winusb_api.h"

//extern "C" {
//int _forceCRTManifest;
//int _forceMFCManifest;
//int _forceAtlDllManifest;
//};

// References InstantiateWinUsbInterface declared in adb_api.cpp
//extern PFN_INSTWINUSBINTERFACE InstantiateWinUsbInterface;
extern BOOL IsWinUsb;

//class CAdbWinApiModule : public CAtlDllModuleT< CAdbWinApiModule > {
//public:
//};

//CAdbWinApiModule _AtlModule;

//void AttachToAdbWinUsbApi()
//{
//    IsWinUsb = FALSE;

//    // Before we can load AdbWinUsbApi.dll we must make sure that WINUSB.DLL
//    // has been installed. Build path to the file.
//    wchar_t path_to_winusb_dll[MAX_PATH + 1];
//    if (!GetSystemDirectory((LPWSTR)path_to_winusb_dll, MAX_PATH)) {
//        return;
//    }
//    wcscat_s(path_to_winusb_dll, L"\\WINUSB.DLL");

//    if (0xFFFFFFFF == GetFileAttributes((LPCWSTR)path_to_winusb_dll)) {
//        // WINUSB.DLL is not installed. We don't (in fact, can't) load
//        // AdbWinUsbApi.dll
//        return;
//    }

//    IsWinUsb = TRUE;
//}

//// DLL Entry Point
//extern "C" BOOL WINAPI DllMain(HINSTANCE instance,
//                               DWORD reason,
//                               LPVOID reserved)
//{
    
//  AttachToAdbWinUsbApi();
//  return _AtlModule.DllMain(reason, reserved);
//}

//int main()
//{
//   AttachToAdbWinUsbApi();
//   return 0;
//}

