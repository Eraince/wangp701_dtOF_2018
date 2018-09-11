//
//  Circle.cpp
//  smileFace
//
//  Created by Peiyu Wang on 9/10/18.
//

#include "Circle.h"

void Circle::setup(float posX, float posY, float radius,int color){
    x = posX;
    y = posY;
    r = radius;
    c = color;
}

void Circle::draw(){
    ofSetColor(c, 0, 0);
    ofDrawCircle(x, y, r);
}

void Circle::update(float posX,float posY){
    x = posX;
    y = posY;
}

void Circle::expand(){
    r += 30;
}
