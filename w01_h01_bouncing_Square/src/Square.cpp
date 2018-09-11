//
//  Square.cpp
//  bouncing_Square
//
//  Created by Peiyu Wang on 9/4/18.
//

#include "Square.h"


void Square::setup(float posX, float posY, float width, float height){
    x = posX;
    y = posY;
    w = width;
    h = height;
    dirX = 5;
    dirY = 5;
    
}

void Square::update(){
    x += dirX;
    y += dirY;
    if(x > ofGetWidth()){
        x = ofGetWidth();
        dirX *= -1;
    }else if (x < 0){
        x = 0;
        dirX *= -1;
    }
    if(y > ofGetHeight()){
        y = ofGetHeight();
        dirY *= -1;
    }else if(y < 0){
        y = 0;
        dirY *= -1;
    }
}

void Square::draw(){
    ofDrawRectangle(x, y, w, h);
}
