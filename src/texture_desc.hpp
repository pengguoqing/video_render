#pragma once

#include <stdint.h>

namespace GLCore{


enum class USAGE: uint8_t{
    UNKNOWN,
    DYNAMIC,
    STAGING,
    RT,
};

enum class PIXFMT : uint8_t{
    UNKNOWN,
	A8,
	R8,
	RGBA,
	BGRX,
	BGRA,
	R10G10B10A2,
	RGBA16,
	R16,
	RGBA16F,
	RGBA32F,
	RG16F,
	RG32F,
	R16F,
	R32F,
	R8G8,
	RGBA_UNORM,
	BGRX_UNORM,
	BGRA_UNORM,
	RG16,
};

struct TextureDesc {
    uint32_t m_width{0};
    uint32_t m_height{0};
    PIXFMT   m_pixfmt{PIXFMT::UNKNOWN};
    USAGE    m_usage{USAGE::UNKNOWN};
};

}