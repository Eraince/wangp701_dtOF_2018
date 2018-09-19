#pragma once
#include "ofMain.h"

class Square {
public:
    void setup(float posX, float posY, float width, float height);
    void update();
    void draw();
    
    // some extra "utility" functions -
    // return the center coordinates
    
    
    glm::vec2 getCenter();
    
    float w, h;
    glm::vec2 pos;
    glm::vec2 vel;
//    float dirX, dirY;
    ofColor color;
    
};

