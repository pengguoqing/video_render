#pragma once

#include "texture_base.hpp"
namespace GLCore {
class IDevice{

public:
    virtual ITexture* CreateTexture(const TextureDesc& texdesc) = 0;
    virtual void      DestoryTexture() = 0;
    

};

}