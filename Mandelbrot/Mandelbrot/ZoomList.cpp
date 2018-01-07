//
//  ZoomList.cpp
//  Mandelbrot
//
//  Created by Juan Carlos Albahaca on 2018-01-06.
//  Copyright © 2018 Juan Carlos Albahaca. All rights reserved.
//

#include "ZoomList.hpp"

namespace jca {
  ZoomList::ZoomList(int width, int height): m_width(width), m_height(height) {}
  
  void ZoomList::add(const Zoom &zoom) {
    zooms.push_back(zoom);
    m_xCenter += (zoom.x - m_width/2)*m_scale;
    m_yCenter += -(zoom.y - m_height/2)*m_scale;
    
    m_scale *= zoom.scale;
    
  }
  
  std::pair<double,double> ZoomList::doZoom(int x, int y) {
    double xFractal = (x - m_width/2)*m_scale + m_xCenter;
    double yFractal = (y - m_height/2)*m_scale + m_yCenter;
    return std::pair<double,double>(xFractal, yFractal);
  }
}

