//
//  Particle.cpp
//  w03_h02_potrait
//
//  Created by Peiyu Wang on 9/19/18.
//

#include "Particle.hpp"


void Particle::setup(float posX, float posY, float radius){
    
    
    
    
    r = radius;
    pos = glm::vec2(posX,posY);
    
    // default to no movement yet - we can set it later
    vel = glm::vec2(0,0);
    acc = glm::vec2(0,0);
    color = ofColor(255,255,255);
    
}

// --------------------------------------------------------
void Particle::update(){
    
    
    
}

// --------------------------------------------------------
void Particle::draw(){
    ofSetColor(color);
    ofDrawCircle(pos.x, pos.y, r);
    // draw a simple rectangle on screen
}

// --------------------------------------------------------


