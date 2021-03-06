#pragma once
#include "ofMain.h"

class Square {
public:
    void setup(float posX, float posY, float width, float height);
    void update();
    void draw();
    void applyForce(glm::vec2 force);
    void applyGra();
    
    
    // some extra "utility" functions -
    // return the center coordinates
    
    
    glm::vec2 getCenter();
    
    float w, h;
    glm::vec2 pos;
    glm::vec2 vel;
    glm::vec2 acc;

    ofColor color;
    
};

