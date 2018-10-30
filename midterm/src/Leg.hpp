//
//  Leg.hpp
//  midterm
//
//  Created by Peiyu Wang on 10/23/18.
//

#pragma once

#include "ofMain.h"
#include "Foot.hpp"
class Leg {
    
public:
    
    void setup(bool active);
    void update(glm::vec2 _dir);
    void draw();
    glm::vec2 getPos();
    
    
    Foot leftFoot;
    Foot rightFoot;
    
    bool leftUpdate;
    bool updateFinished;
    
    glm::vec2 dir;
};

