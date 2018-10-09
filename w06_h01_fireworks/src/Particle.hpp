//
//  Particle.hpp
//  w06_h01_fireworks
//
//  Created by Peiyu Wang on 10/8/18.
//

#pragma once
#include "ofMain.h"

class Particle {
    
public:
    
    Particle();
    Particle(glm::vec2 _pos, glm::vec2 _vel, ofColor _color);
    
    void applyGra();
    void update();
    void draw();
    
    
    glm::vec2 pos,vel,pre;
    ofColor color;
    
    
};
