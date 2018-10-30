//
//  Foot.cpp
//  midterm
//
//  Created by Peiyu Wang on 10/25/18.
//

#include "Foot.hpp"

void Foot::setup(string img, glm::vec2 _pos,glm::vec2 _vel){
    foot.load(img);
    pos = _pos;
    vel = _vel;
    
    
    
}

void Foot::update(glm::vec2 dir){
    vel += dir;
    pos += vel;
   
    
}


void Foot::draw(int deg){
    
    ofPushMatrix();
    ofTranslate(pos);
    ofRotateDeg(deg);
    foot.setAnchorPercent(0.5, 0.5);
    foot.draw(0,0,30,30);
    ofPopMatrix();
    
}
