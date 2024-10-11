#include "pch.h"
#include "BabylonNative.h"
#include "BabylonModule.h"
#include "JSI/JsiApiContext.h"

// see https://developercommunity.visualstudio.com/t/-imp-std-init-once-complete-unresolved-external-sy/1684365
#if _MSC_VER >= 1932 // Visual Studio 2022 version 17.2+
#    pragma comment(linker, "/alternatename:__imp___std_init_once_complete=__imp_InitOnceComplete")
#    pragma comment(linker, "/alternatename:__imp___std_init_once_begin_initialize=__imp_InitOnceBeginInitialize")
#endif

namespace winrt::BabylonModule {
    void BabylonModule::Initialize(winrt::Microsoft::ReactNative::ReactContext const &reactContext) noexcept
    {
        _reactContext = reactContext;
    }

    void BabylonModule::CustomInitialize(winrt::Microsoft::ReactNative::ReactPromise<bool>&& result) noexcept
    {
        winrt::Microsoft::ReactNative::ExecuteJsi(_reactContext, [result, this](facebook::jsi::Runtime& jsiRuntime) {
            auto jsDispatcher = [this](std::function<void()> func)
            {
                this->_reactContext.JSDispatcher().Post([this, func{ std::move(func) }]() {
                    func();
                });
            };
            BabylonNative::Initialize(jsiRuntime, jsDispatcher);
        });
        result.Resolve(true);
    }

    void BabylonModule::ResetView(winrt::Microsoft::ReactNative::ReactPromise<bool>&& result) noexcept
    {
        _reactContext.UIDispatcher().Post([result]() {
            BabylonNative::ResetView();
            result.Resolve(true);
        });
    }
};