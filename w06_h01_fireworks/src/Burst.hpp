//
//  Burst.hpp
//  w06_h01_fireworks
//
//  Created by Peiyu Wang on 10/8/18.
//

#pragma once
#include "ofMain.h"
#include "Particle.hpp"

class Burst {
public:
    
    
    Burst();    
    Burst(glm::vec2 _pos, int qty);

    
    void update();
    void draw();
    
    
    
    int qty;
    
    glm::vec2 pos;
    ofColor c;
    
    vector<Particle> particles;
};
