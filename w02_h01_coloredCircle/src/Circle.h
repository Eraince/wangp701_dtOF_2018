//
//  Circle.h
//  smileFace
//
//  Created by Peiyu Wang on 9/10/18.
//

#pragma once
#include "ofMain.h"

class Circle {
public:
    void setup(float posX, float posY, float radius, int color);
    void update(float posX, float posY);
    void draw();
    void expand();
    // some extra "utility" functions -
    // return the center coordinates
    
    float x, y, r,c;
    
    
};

