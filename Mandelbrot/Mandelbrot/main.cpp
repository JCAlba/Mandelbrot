//
//  main.cpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-05.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#include <iostream>
#include <cstdint>
#include <memory>
#include <math.h>
#include "Bitmap.hpp"
#include "Mandelbrot.hpp"

using namespace jca;

int main(int argc, const char * argv[]) {
  int const WIDTH = 800;
  int const HEIGHT = 600;
  int iterations = 0;
  Bitmap bitmap(WIDTH, HEIGHT);
  
//  double min = 999999;
//  double max = -999999;
  std::unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]{});
  std::unique_ptr<int[]> fractal(new int[WIDTH*HEIGHT]{});
  
  for(int y = 0; y < HEIGHT; ++y){
    for(int x = 0; x < WIDTH; ++x){
      double xFractal = (x - WIDTH/2 - 200) * 2.0/HEIGHT;
      double yFractal = (y - HEIGHT/2) * 2.0/HEIGHT;
      
      iterations = Mandelbrot::getIterations(xFractal, yFractal);
      fractal[y*WIDTH+x] = iterations;
      if(iterations != Mandelbrot::MAX_ITERATIONS)
        histogram[iterations]++;
      
//      if(red < min) min = red;
//      if(red > max) max = red;
    }
  }
  
  int total = 0;
  for(int i=0; i<Mandelbrot::MAX_ITERATIONS; ++i)
    total += histogram[i];
  
  for(int y = 0; y < HEIGHT; ++y){
    for(int x = 0; x < WIDTH; ++x){
      int iterations = fractal[y*WIDTH+x];
      uint8_t red{0};
      uint8_t green = 0;
      uint8_t blue{0};
      
      if(iterations != Mandelbrot::MAX_ITERATIONS){
        double hue = 0.0;
        for(int i = 0; i<=iterations; ++i)
          hue += (double)histogram[i]/total;
        
        green = pow(255,hue);
      }
      bitmap.setPixel(x, y, red, green, blue);
    }
  }
  
  bitmap.write("test.bmp");
  std::cout << "Finished\n";
  return 0;
}
