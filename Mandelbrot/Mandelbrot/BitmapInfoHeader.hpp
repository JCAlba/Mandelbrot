//
//  BitmapInfoHeader.hpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-05.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#ifndef BitmapInfoHeader_hpp
#define BitmapInfoHeader_hpp

#include <cstdint>

#pragma pack(2)

struct BitmapInfoHeader {
  int32_t headerSize{40};
  int32_t width;
  int32_t height;
  int16_t planes{1};
  int16_t bitsPerPixel{24};
  int32_t compression{0};
  int32_t dataSize{0};
  int32_t horizontalResolution{2400};
  int32_t verticalResolution{2400};
  int32_t colors{0};
  int32_t importantColors{0};
};

#endif /* BitmapInfoHeader_hpp */
