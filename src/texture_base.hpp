#pragma once

#include "basic_type.hpp"
#include "texture_desc.hpp"

namespace GLCore {
class ITexture{

public:
    virtual uint32_t    Width()  const  = 0; 
    virtual uint32_t    Height() const  = 0;
    virtual PIXFMT      PixelFmt() const  = 0;  

    // just for system memory frame data
    // if cur teture is GPU teture, it will return nullptr
    virtual BufferHandle GetBufferRawData() const = 0;

    virtual void        SetValidRect() = 0;

    // GPU->GPU, CPU->GPU, GPU->CPU, CPU->CPU
    virtual bool        Copy(const ITexture& dst, const ITexture& src) const = 0;
    
    virtual void        Release() = 0;
    
    
    
};  

}