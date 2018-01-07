//
//  RBG.hpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-07.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#ifndef RGB_hpp
#define RGB_hpp

#include <stdio.h>

namespace jca {
  struct RGB {
    double r;
    double g;
    double b;

    RGB(double r, double g, double b);    
  };
  RGB operator-(const RGB & first, const RGB & second);
}

#endif /* RBG_hpp */
