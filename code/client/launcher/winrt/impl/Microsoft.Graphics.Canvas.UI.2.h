﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.190111.3

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.UI.1.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI {

struct CanvasTimingInformation
{
    int64_t UpdateCount;
    Windows::Foundation::TimeSpan TotalTime;
    Windows::Foundation::TimeSpan ElapsedTime;
    bool IsRunningSlowly;
};

inline bool operator==(CanvasTimingInformation const& left, CanvasTimingInformation const& right) noexcept
{
    return left.UpdateCount == right.UpdateCount && left.TotalTime == right.TotalTime && left.ElapsedTime == right.ElapsedTime && left.IsRunningSlowly == right.IsRunningSlowly;
}

inline bool operator!=(CanvasTimingInformation const& left, CanvasTimingInformation const& right) noexcept
{
    return !(left == right);
}

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::UI {

struct WINRT_EBO CanvasCreateResourcesEventArgs :
    Microsoft::Graphics::Canvas::UI::ICanvasCreateResourcesEventArgs
{
    CanvasCreateResourcesEventArgs(std::nullptr_t) noexcept {}
    CanvasCreateResourcesEventArgs(Microsoft::Graphics::Canvas::UI::CanvasCreateResourcesReason const& createResourcesReason);
};

}
