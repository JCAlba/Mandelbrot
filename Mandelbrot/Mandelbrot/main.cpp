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
  Bitmap bitmap(800,600);
  
  bitmap.write("test.bmp");
  std::cout << "Finished\n";
  return 0;
}
