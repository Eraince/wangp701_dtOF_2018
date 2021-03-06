//
//  Mover.cpp
//  midterm
//
//  Created by Peiyu Wang on 10/27/18.
//

#include "Mover.hpp"


Mover::Mover()
{
    
    origPos = glm::vec2(0,0);
    pos = glm::vec2(0,0);
    vel = glm::vec2(0,0);
    acc = glm::vec2(0,0);
    
    mass = 5;
}

Mover::Mover(glm::vec2 _pos)
{
    
    origPos = _pos;
    pos = origPos;
    vel = glm::vec2(0,0);
    acc = glm::vec2(0,0);
    
    mass = 5;
}

void Mover::applyForce(glm::vec2 force)
{
    acc += force / mass;
}


void Mover::update()
{
    vel += acc;
    pos += vel;
    acc *= 0;
}

void Mover::draw()
{
    ofPushStyle();
    
    // let's color each mover based on its current speed
    // interpolate ("lerp") between 2 colors (slow to fast -> blue to red)
    
    
    ofFill();
    ofSetColor(255);
    ofDrawRectangle(pos, 67, 40);
    ofSetColor(0);
    ofNoFill();
    ofDrawRectangle(pos, 67, 40);      // base radius on mass
    
    ofPopStyle();
}

