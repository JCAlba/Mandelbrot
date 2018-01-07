//
//  FractalCreator.hpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-07.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#ifndef FractalCreator_hpp
#define FractalCreator_hpp

#include <iostream>
#include <cstdint>
#include <vector>
#include <memory>
#include <math.h>
#include "Zoom.hpp"
#include "ZoomList.hpp"
#include "Mandelbrot.hpp"
#include "Bitmap.hpp"
#include "RGB.hpp"

namespace jca {
  class FractalCreator {
  private:
    int m_width;
    int m_height;
    int m_total;
    std::unique_ptr<int[]> m_histogram;
    std::unique_ptr<int[]> m_fractal;
    Bitmap m_bitmap;
    ZoomList m_zoomList;
    std::vector<int> m_ranges;
    std::vector<RGB> m_colors;
    std::vector<int> m_rangeTotals;
    
    bool m_bGotFirstRange{false};
  private:
    void calculateIteration();
    void calculateTotalIterations();
    void calculateRangeTotals();
    void drawFractal();
    void writeBitmap(std::string name);
    int getRange(int iterations) const;
  public:
    FractalCreator(int width, int height);
    virtual ~FractalCreator();
    void addRange(double rangeEnd, const RGB & rgb);
    void run(std::string name);
    void addZoom(const Zoom& zoom);
  };

}



#endif /* FractalCreator_hpp */
