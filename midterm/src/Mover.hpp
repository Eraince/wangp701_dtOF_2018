//
//  Mover.hpp
//  midterm
//
//  Created by Peiyu Wang on 10/27/18.
//

#pragma once
#include "ofMain.h"

class Mover {
    
public:
    
    Mover();
    Mover(glm::vec2 _pos);
    
    void applyForce(glm::vec2 force);
    void update();
    void draw();
    
    glm::vec2 origPos, pos, vel, acc;
    glm::vec2 elasticForce;
    float mass;
    
    
};
