// pch.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define NOMINMAX 1
#define WIN32_LEAN_AND_MEAN 1
#define WINRT_LEAN_AND_MEAN 1

// Windows Header Files
#include <windows.h>
#undef GetCurrentTime
#include <unknwn.h>

// WinRT Header Files
#include <winrt/base.h>
#include <CppWinRTIncludes.h>
#include <winrt/Microsoft.ReactNative.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.System.Threading.h>
// #include <winrt/Microsoft.UI.Input.h>
#include <winrt/Microsoft.UI.Xaml.Controls.Primitives.h>
#include <winrt/Microsoft.UI.Xaml.Controls.h>
#include <winrt/Microsoft.UI.Xaml.Data.h>
// #include <winrt/Microsoft.UI.Xaml.Input.h>
#include <winrt/Microsoft.UI.Xaml.Interop.h>
#include <winrt/Microsoft.UI.Xaml.Markup.h>
#include <winrt/Microsoft.UI.Xaml.Media.h>
#include <winrt/Microsoft.UI.Xaml.Navigation.h>
#include <winrt/Microsoft.UI.Xaml.h>

// C RunTime Header Files
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>
#include <tchar.h>

#ifndef NODE_ADDON_API_DISABLE_NODE_SPECIFIC
#define NODE_ADDON_API_DISABLE_NODE_SPECIFIC
#endif

#ifndef NODE_ADDON_API_DISABLE_DEPRECATED
#define NODE_ADDON_API_DISABLE_DEPRECATED
#endif

// Reference additional headers your project requires here
#pragma comment (lib, "../libs/x64/Debug/arcana.lib")
#pragma comment (lib, "../libs/x64/Debug/bx.lib")
#pragma comment (lib, "../libs/x64/Debug/bimg.lib")
#pragma comment (lib, "../libs/x64/Debug/bgfx.lib")
#pragma comment (lib, "../libs/x64/Debug/napi.lib")
#pragma comment (lib, "../libs/x64/Debug/edtaa3.lib")
#pragma comment (lib, "../libs/x64/Debug/iqa.lib")
#pragma comment (lib, "../libs/x64/Debug/nvtt.lib")
#pragma comment (lib, "../libs/x64/Debug/pvrtc.lib")
#pragma comment (lib, "../libs/x64/Debug/squish.lib")
#pragma comment (lib, "../libs/x64/Debug/astc-encoder.lib")
#pragma comment (lib, "../libs/x64/Debug/xr.lib")
#pragma comment (lib, "../libs/x64/Debug/tinyexr.lib")
#pragma comment (lib, "../libs/x64/Debug/openxr_loaderd.lib")
#pragma comment (lib, "../libs/x64/Debug/UrlLib.lib")
#pragma comment (lib, "../libs/x64/Debug/glslangd.lib")
#pragma comment (lib, "../libs/x64/Debug/glslang-default-resource-limitsd.lib")
#pragma comment (lib, "../libs/x64/Debug/etc1.lib")
#pragma comment (lib, "../libs/x64/Debug/etc2.lib")
#pragma comment (lib, "../libs/x64/Debug/spirv-cross-cored.lib")
#pragma comment (lib, "../libs/x64/Debug/spirv-cross-hlsld.lib")
#pragma comment (lib, "../libs/x64/Debug/SPIRVd.lib")
#pragma comment (lib, "../libs/x64/Debug/GenericCodeGend.lib")
#pragma comment (lib, "../libs/x64/Debug/MachineIndependentd.lib")
#pragma comment (lib, "../libs/x64/Debug/OSDependentd.lib")
#pragma comment (lib, "../libs/x64/Debug/Graphics.lib")
#pragma comment (lib, "../libs/x64/Debug/OGLCompilerd.lib")
#pragma comment (lib, "../libs/x64/Debug/NativeEngine.lib")
#pragma comment (lib, "../libs/x64/Debug/NativeInput.lib")
#pragma comment (lib, "../libs/x64/Debug/NativeCamera.lib")
#pragma comment (lib, "../libs/x64/Debug/NativeOptimizations.lib")
#pragma comment (lib, "../libs/x64/Debug/NativeTracing.lib")
#pragma comment (lib, "../libs/x64/Debug/NativeCapture.lib")
#pragma comment (lib, "../libs/x64/Debug/NativeXr.lib")
#pragma comment (lib, "../libs/x64/Debug/Canvas.lib")
#pragma comment (lib, "../libs/x64/Debug/Window.lib")
#pragma comment (lib, "../libs/x64/Debug/XMLHttpRequest.lib")
#pragma comment (lib, "../libs/x64/Debug/JSRuntime.lib")
