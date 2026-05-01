#include <jni.h>
#include <dlfcn.h>
#include "patch.h"
#include "Logger.h"
#include "../include/cocos2dx/include/cocos2d.h"
#include <hooking.h>
#include <string>
#include <iostream>

using namespace cocos2d;

#ifndef __GDMACROS_H__
#define __GDMACROS_H__

#define __STR_CAT___(str1, str2) str1##str2
#define __STR_CAT__(str1, str2) __STR_CAT___(str1, str2)

#define PAD(size) char __STR_CAT__(__, __STR_CAT__(pad, __LINE__))[size] = {};

template <class R, class T>
R& from(T base, intptr_t offset) {
    return *reinterpret_cast<R*>(reinterpret_cast<uintptr_t>(base) + offset);
}

#define __WARN_DEBUG__ true

#endif 

