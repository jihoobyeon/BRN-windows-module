#include "NativeXr.h"

#include "../JsRuntimeScheduler.h"

#include "../Graphics/DeviceContext.h"
#include "../Graphics/FrameBuffer.h"

#include "../napi/napi.h"


// NativeXr implementation proper.
namespace Babylon
{
    namespace Plugins
    {
        NativeXr::NativeXr(std::shared_ptr<Impl> impl)
            : m_impl{std::move(impl)}
        {
        }

        NativeXr::~NativeXr()
        {
        }

        NativeXr BABYLON_API NativeXr::Initialize(Napi::Env env)
        {
            auto impl{std::make_shared<Impl>(env)};

            return {impl};
        }

        void NativeXr::UpdateWindow(void* windowPtr)
        {
            m_impl->UpdateWindow(windowPtr);
        }

        void NativeXr::SetSessionStateChangedCallback(std::function<void(bool)> callback)
        {
            m_impl->SetSessionStateChangedCallback(std::move(callback));
        }
    }
}
