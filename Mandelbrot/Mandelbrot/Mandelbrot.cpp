//
//  Mandelbrot.cpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-06.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#include "Mandelbrot.hpp"
#include <complex>

namespace jca {
  Mandelbrot::Mandelbrot() {
    
  }
  Mandelbrot::~Mandelbrot() {
    
  }
  int Mandelbrot::getIterations(double x, double y) {
    std::complex<double> z{0};
    std::complex<double> c(x,y);
    
    int iterations{0};
    
    while(iterations < MAX_ITERATIONS) {
      z = z*z + c;
      if(std::abs(z) > 2) {
        break;
      }
      ++iterations;
    }
    return iterations;
  }
}

