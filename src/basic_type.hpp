#pragma once

#include <stdint.h>

namespace GLCore  {

using BufferHandle = uint8_t*;

struct GRECT {
    float m_left{0.f};
    float m_right{0.f};
    float m_top{0.f};
    float m_bottom{0.f};
};


}

