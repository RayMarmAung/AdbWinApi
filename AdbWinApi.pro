CONFIG -= qt

TEMPLATE = lib
CONFIG += dll

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS
DEFINES += ADBWIN_EXPORTS
DEFINES += _WINDLL
DEFINES += _USRDLL
DEFINES += USE_STATIC_ATL
DEFINES += ATL_VER = 71
DEFINES += USE_STL = 1
DEFINES += STL_VER = 60
DEFINES += USE_LIBCMT

LIBS += -L"C:/WinDDK/7600.16385.1/lib/ATL/i386" -latls
LIBS += -L"C:/WinDDK/7600.16385.1/lib/win7/i386" -lole32 -ladvapi32 -lkernel32 -luser32 -loleaut32 -lwbemuuid -luuid -lsetupapi -lusbd -lwinusb

INCLUDEPATH += C:/WinDDK/7600.16385.1/inc/atl71
INCLUDEPATH += C:/WinDDK/7600.16385.1/inc/ddk
INCLUDEPATH += ../usb/api

SOURCES += \
    ../usb/api/AdbWinApi.cpp \
    ../usb/api/adb_api.cpp \
    ../usb/api/adb_endpoint_object.cpp \
    ../usb/api/adb_helper_routines.cpp \
    ../usb/api/adb_interface.cpp \
    ../usb/api/adb_interface_enum.cpp \
    ../usb/api/adb_io_completion.cpp \
    ../usb/api/adb_legacy_endpoint_object.cpp \
    ../usb/api/adb_legacy_interface.cpp \
    ../usb/api/adb_legacy_io_completion.cpp \
    ../usb/api/adb_object_handle.cpp \
    ../usb/api/adb_winusb_endpoint_object.cpp \
    ../usb/api/adb_winusb_interface.cpp \
    ../usb/api/adb_winusb_io_completion.cpp

HEADERS +=

