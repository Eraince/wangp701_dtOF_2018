//
//  Foot.hpp
//  midterm
//
//  Created by Peiyu Wang on 10/25/18.
//

#pragma once

#include "ofMain.h"
class Foot {
    
public:
    
    void setup(string img,glm::vec2 _pos,glm::vec2 _vel);
    void update(glm::vec2 dir);
    void draw(int deg);
    
    
    ofImage foot;
    
    glm::vec2 pos;
    glm::vec2 vel;

    
    
    
};


