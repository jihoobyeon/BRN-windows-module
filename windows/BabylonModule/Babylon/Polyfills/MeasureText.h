#pragma once

#include "Canvas.h"

namespace Babylon::Polyfills::Internal
{
    namespace MeasureText
    {
        Napi::Value CreateInstance(Napi::Env env, Context* context, const std::string& text);
    }
}