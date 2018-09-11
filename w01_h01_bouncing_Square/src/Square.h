//
//  Square.h
//  bouncing_Square
//
//  Created by Peiyu Wang on 9/4/18.
#pragma once
#include "ofMain.h"

class Square {
public:
    void setup(float posX, float posY, float width, float height);
    void update();
    void draw();
    
    float x, y, w, h;
    float dirX, dirY;
};


