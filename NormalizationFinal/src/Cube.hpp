//
//  Cube.hpp
//  NormalizationFinal
//
//  Created by Peiyu Wang on 11/22/18.
//

#pragma once

#include "ofMain.h"
#include "Cube.hpp"
class Cube {
    
public:
    
    void setup(float red, float green, float blue,int _rating);
    void update(float currentTime);
    void draw();
    
    void changeColor(Cube best, int rating);
    float calculateDiff(float best, float current, int rating);
    
    float r;
    float g;
    float b;
    float finalR;
    float finalG;
    float finalB;
    float currentR;
    float currentG;
    float currentB;
    int rating;
    ofBoxPrimitive box;

    
    
   
};
