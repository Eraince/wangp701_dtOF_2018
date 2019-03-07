//
//  Cube.cpp
//  NormalizationFinal
//
//  Created by Peiyu Wang on 11/22/18.
//

#include "Cube.hpp"




void Cube::setup(float red, float green, float blue, int _rating){
    r = red;
    g = green;
    b = blue;
    rating = _rating;
    box.set(80);
}


void Cube::changeColor(Cube best, int rating){
    float red = calculateDiff(best.r, r, rating);
    float green = calculateDiff(best.g,g, rating);
    float blue = calculateDiff(best.b, b, rating);
    
    currentR = r;
    currentG = g;
    currentB = b;
    finalR = red;
    finalG = green;
    finalB = blue;
    
}

void Cube::draw(){
    float spinX = sin(ofGetElapsedTimef()*.35f);
    float spinY = cos(ofGetElapsedTimef()*.075f);
    
    if(rating == 1){
        box.setPosition(ofGetWidth()/2, ofGetHeight()/4, 0);
    }else{
        box.setPosition(ofGetWidth()/5 * (rating - 2) + 110, ofGetHeight()/2 + ofGetHeight() / 5, 0);
    }
    
    ofSetColor(r,g,b,200);
    box.rotateDeg(spinX, 1.0, 0.0, 0.0);
    box.rotateDeg(spinY, 0, 1.0, 0.0);
    box.draw();
}

void Cube::update(float currentTime){
    
    float time = ofGetElapsedTimef() - currentTime;
    if(time <= 4){
        r = ofMap(time,0,5,currentR,finalR);
        g = ofMap(time,0,5,currentG,finalG);
        b = ofMap(time,0,5,currentB,finalB);
    }else{
        r = finalR;
        g = finalG;
        b = finalB;
    }

}

float Cube::calculateDiff(float best, float current, int rating){
    float diff = 0;
    if(best > current){
        diff = (best - current) * 0.1 * rating;
        return current + diff;
    }else if(best == current){
        return current;
    }else{
        diff = (current - best) * 0.1 * rating;
        return current - diff;
    }
}
