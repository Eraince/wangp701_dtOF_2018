//
//  Star.cpp
//  w06_h02_interstella
//
//  Created by Peiyu Wang on 10/7/18.
//

#include "Star.hpp"

Star::Star()
{

    // default constructor:
   

//    x = 100;
//    y = 100;
//    r1 = 10;
//    r2 = 5;
//
//    wP = 0.7;
//    hP = 0.5;
//    frameC = -500;
    
    pos = glm::vec2(0,0);
    r1 = 0;
    r2 = 0;
    wP = 0;
    hP = 0;
    frameC = 0;
}


Star::Star(glm::vec2 _pos,float _r1, float _r2, float _wP, float _hP, float _frameC)
{
    pos = _pos;
    r1 = _r1;
    r2 = _r2;
    wP = _wP;
    hP = _hP;
    frameC = _frameC;
}


void Star::update(){
    ofPushMatrix();
    ofTranslate(ofGetWidth()*wP, ofGetHeight()*hP);
    ofRotate(ofGetElapsedTimef() * 10,0,1,0);
    
    ofPopMatrix();
}

void Star::draw(){
    float angle = 2 * PI / 5;
    
    float halfAngle = angle/2.0;
    
    
    ofSetPolyMode(OF_POLY_WINDING_NONZERO);
    ofBeginShape();
    ofSetColor(255,255,0);
    ofFill();
    
    for (float a = 0; a < 2 * PI; a += angle) {
        cout<<cos(a)<<endl;
        float sx = pos.x + cos(a) * r2;
        float sy = pos.y + sin(a) * r2;
        ofVertex(sx, sy);
        
        
        sx = pos.x + cos(a+halfAngle) * r1;
        sy = pos.y + sin(a+halfAngle) * r1;
        
        ofVertex(sx, sy);
        
    }
    ofEndShape();
    
}
