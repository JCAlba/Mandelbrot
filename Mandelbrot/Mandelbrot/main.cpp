//
//  main.cpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-05.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#include <iostream>
#include "Bitmap.hpp"

using namespace jca;

int main(int argc, const char * argv[]) {
  int const WIDTH = 800;
  int const HEIGTH = 600;
  Bitmap bitmap(WIDTH, HEIGTH);
  
  for(int y = 0; y < HEIGTH; ++y){
    for(int x = 0; x < WIDTH; ++x){
      bitmap.setPixel(x, y, 255, 0, 0);
    }
  }
  
  bitmap.write("test.bmp");
  std::cout << "Finished\n";
  return 0;
}
