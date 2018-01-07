//
//  main.cpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-05.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#include <iostream>
#include "FractalCreator.hpp"
#include "RGB.hpp"
#include "Zoom.hpp"

using namespace jca;

int main(int argc, const char * argv[]) {
  
  FractalCreator fractalCreator(800, 600);
  
  fractalCreator.addRange(0.0, RGB(0,0,0));
  fractalCreator.addRange(0.3, RGB(0,10,100));
  fractalCreator.addRange(0.5, RGB(0,30,169));
  fractalCreator.addRange(1.0, RGB(20,100,255));
  
  fractalCreator.addZoom(Zoom(295, 202, 0.1));
  fractalCreator.addZoom(Zoom(312, 304, 0.1));
  fractalCreator.run("test.bmp");
  
  std::cout << "Finished\n";
  return 0;
}
