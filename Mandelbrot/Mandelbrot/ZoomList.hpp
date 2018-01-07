//
//  ZoomList.hpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-06.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#ifndef ZoomList_hpp
#define ZoomList_hpp

#include <stdio.h>
#include <vector>
#include <utility>
#include "Zoom.hpp"


namespace jca {
  class ZoomList {
  private:
    double m_xCenter{0.0};
    double m_yCenter{0.0};
    double m_scale{1.0};
    int m_width{0};
    int m_height{0};
    std::vector<Zoom> zooms;
  public:
    ZoomList(int width, int height);
    void add(const Zoom &zoom);
    std::pair<double,double> doZoom(int x, int y);
  };
}

#endif /* ZoomList_hpp */
