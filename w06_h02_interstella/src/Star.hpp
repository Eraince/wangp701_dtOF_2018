//
//  Star.hpp
//  w06_h02_interstella
//
//  Created by Peiyu Wang on 10/7/18.
//


#pragma once
#include "ofMain.h"

class Star {
    
public:
    Star();
    
    Star(glm::vec2 _pos,float _r1, float _r2, float _wP, float _hP, float _frameC);
    
    
    void update();
    void draw();
    
    glm::vec2 pos;
    float r1, r2, wP,hP,frameC;
};
