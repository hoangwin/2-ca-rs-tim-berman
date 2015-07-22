#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t739;
struct WebCamDevice_t739_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m4791 (WebCamDevice_t739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m4792 (WebCamDevice_t739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t739_marshal(const WebCamDevice_t739& unmarshaled, WebCamDevice_t739_marshaled& marshaled);
void WebCamDevice_t739_marshal_back(const WebCamDevice_t739_marshaled& marshaled, WebCamDevice_t739& unmarshaled);
void WebCamDevice_t739_marshal_cleanup(WebCamDevice_t739_marshaled& marshaled);
