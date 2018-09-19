#include "Square.h"

// --------------------------------------------------------
void Square::setup(float posX, float posY, float width, float height){
    
    // setup position and size
    
   
    w = width;
    h = height;
    pos = glm::vec2(posX,posY);
    
    // default to no movement yet - we can set it later
    vel = glm::vec2(0,0);
    acc = glm::vec2(0,0);
    color = ofColor(255,255,255);
   
}

// --------------------------------------------------------
void Square::update(){
    
    applyGra();
    vel += acc;
    pos += vel;
    acc = glm::vec2(0,0);

}

// --------------------------------------------------------
void Square::draw(){
    ofSetColor(color);
    ofDrawRectangle(pos.x,pos.y,w,h);
    // draw a simple rectangle on screen
}

// --------------------------------------------------------

void Square::applyForce(glm::vec2 force){
    acc += force;
}

void Square::applyGra(){
    glm::vec2 gra = glm::vec2(0,0.5);
    acc += gra;
}

glm::vec2 Square::getCenter(){
    return glm::vec2(pos.x + w * 0.5, pos.y + h * 0.5);
}
