#include "../bgfx/bgfx.h"
#include <map>
#include "BabylonCanvas.h"
#include "Context.h"
#include "ImageData.h"

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#endif

#include "nanovg/nanovg.h"

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

namespace Babylon::Polyfills::Internal
{
    static constexpr auto JS_IMAGEDATA_CONSTRUCTOR_NAME = "ImageData";

    Napi::Value ImageData::CreateInstance(Napi::Env env, Context* context, uint32_t width, uint32_t height)
    {
        Napi::HandleScope scope{env};
        Napi::Function func = DefineClass(
            env,
            JS_IMAGEDATA_CONSTRUCTOR_NAME,
            {
                InstanceAccessor("width", &ImageData::GetWidth, nullptr),
                InstanceAccessor("height", &ImageData::GetHeight, nullptr),
                InstanceAccessor("data", &ImageData::GetData, nullptr),
            });
        return func.New({Napi::External<Context>::New(env, context), Napi::Value::From(env, width), Napi::Value::From(env, height)});
    }

    ImageData::ImageData(const Napi::CallbackInfo& info)
        : Napi::ObjectWrap<ImageData>{info}
    {
        auto context{info[0].As<Napi::External<Context>>().Data()};
        auto width{info[1].As<Napi::Number>().Uint32Value()};
        auto height{info[1].As<Napi::Number>().Uint32Value()};
        m_width = width;
        m_height = height;
    }

    Napi::Value ImageData::GetWidth(const Napi::CallbackInfo&)
    {
        return Napi::Value::From(Env(), m_width);
    }

    Napi::Value ImageData::GetHeight(const Napi::CallbackInfo&)
    {
        return Napi::Value::From(Env(), m_height);
    }

    Napi::Value ImageData::GetData(const Napi::CallbackInfo& info)
    {
        // return a well size array with 0
        // TODO: Get datas from context/canvas
        const auto size{m_width * m_height * 4};
        auto data{Napi::Uint8Array::New(info.Env(), size)};
        memset(data.Data(), 0, size);
        return Napi::Value::From(info.Env(), data);
    }
}
