//
//  Mandelbrot.hpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-06.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#ifndef Mandelbrot_hpp
#define Mandelbrot_hpp

namespace jca {
  class Mandelbrot {
  public:
    static const int MAX_ITERATIONS = 1000;
  public:
    Mandelbrot();
    virtual ~Mandelbrot();
    static int getIterations(double x, double y);
  };
}

#include <stdio.h>

#endif /* Mandelbrot_hpp */
