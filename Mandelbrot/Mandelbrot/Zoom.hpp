//
//  Zoom.hpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-06.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#ifndef Zoom_hpp
#define Zoom_hpp

namespace jca {
  struct Zoom {
    int x{0};
    int y{0};
    double scale{0.0};
    
    Zoom(int x, int y, double scale): x(x), y(y), scale(scale) {};
  };
}

#include <stdio.h>

#endif /* Zoom_hpp */
