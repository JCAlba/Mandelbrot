//
//  Bitmap.cpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-05.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#include "Bitmap.hpp"
#include "BitmapFileHeader.hpp"
#include "BitmapInfoHeader.hpp"

using namespace jca;

namespace jca {
  Bitmap::Bitmap(int width, int height): m_width(width), m_height(height), m_pPixels(new uint8_t[width*height*3]{}) {};

  Bitmap::~Bitmap() {};
  
  bool Bitmap::write(std::string filename) {
    BitmapFileHeader fileHeader;
    BitmapInfoHeader infoHeader;
    
    fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + m_width*m_height*3;
    fileHeader.dataOffSet = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);
    
    infoHeader.width = m_width;
    infoHeader.height = m_height;
    return false;
  }
  
  void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
    
  }
}