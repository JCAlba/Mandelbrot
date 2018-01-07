//
//  RBG.cpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-07.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#include "RGB.hpp"

namespace jca {
  RGB::RGB(double r, double g, double b): r(r), g(g), b(b) {};
  RGB operator-(const RGB & first, const RGB & second) {
    return RGB(first.r - second.r, first.g - second.g, first.b - second.b);
  }
}
