//
//  Particle.hpp
//  w03_h02_potrait
//
//  Created by Peiyu Wang on 9/19/18.
//

#pragma once
#include "ofMain.h"

class Particle {
public:
    void setup(float posX, float posY, float radius);
    void update();
    void draw();
    
    
    // some extra "utility" functions -
    // return the center coordinates
    
    
    
    float r;
    glm::vec2 pos;
    glm::vec2 vel;
    glm::vec2 acc;
    
    ofColor color;
    
};
