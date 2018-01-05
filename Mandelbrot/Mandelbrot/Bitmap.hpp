//
//  Bitmap.hpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-05.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#ifndef Bitmap_hpp
#define Bitmap_hpp
#include <iostream>
#include <cstdint>
namespace jca {
  
  class Bitmap {
  private:
    int m_width{0};
    int m_height{0};
    std::unique_ptr<uint8_t[]> m_pPixels{nullptr};
  public:
    Bitmap(int width, int height);
    bool write(std::string filename);
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
    virtual ~Bitmap();
  };
  
}

#endif /* Bitmap_hpp */
