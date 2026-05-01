APP_CFLAGS := -fPIC -shared -fexceptions
APP_PLATFORM := android-16
APP_STL:= gnustl_static
APP_CPPFLAGS += -std=c++14 -fexceptions
LOCAL_CPP_FEATURES := rtti
NDK_TOOLCHAIN_VERSION := clang
LOCAL_CPPFLAGS := -fexceptions
# you should change app_abi to armeabi you're using the arm v5 libcocos2dcpp.so!
APP_ABI := armeabi-v7a
