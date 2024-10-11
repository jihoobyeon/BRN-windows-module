#pragma once

#if __has_include("codegen\NativeBabylonModuleDataTypes.g.h")
#include "codegen\NativeBabylonModuleDataTypes.g.h"
#endif
#include "codegen\NativeBabylonModuleSpec.g.h"

#include "NativeModules.h"

namespace winrt::BabylonModule {
    REACT_MODULE(BabylonModule);
    struct BabylonModule
    {
        using ModuleSpec = BabylonModuleCodegen::BabylonModuleSpec;

        REACT_INIT(Initialize);
        void Initialize(winrt::Microsoft::ReactNative::ReactContext const &reactContext) noexcept;

        REACT_METHOD(CustomInitialize, L"initialize");
        void CustomInitialize(winrt::Microsoft::ReactNative::ReactPromise<bool>&& result) noexcept;

        REACT_METHOD(ResetView, L"resetView");
        void ResetView(winrt::Microsoft::ReactNative::ReactPromise<bool>&& result) noexcept;

    private:
         winrt::Microsoft::ReactNative::ReactContext _reactContext;
    };
} // namespace winrt::BabylonReactNative
