//
//  BitmapFileHeader.hpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-05.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#ifndef BitmapFileHeader_hpp
#define BitmapFileHeader_hpp

#include <cstdint>

#pragma pack(2)

namespace jca {

struct BitmapFileHeader {
  char header[2]{'B', 'M'};
  int32_t fileSize;
  int32_t reserved{0};
  int32_t dataOffSet;
};

}

#endif /* BitmapFileHeader_hpp */
