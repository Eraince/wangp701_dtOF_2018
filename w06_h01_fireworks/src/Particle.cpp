//
//  Particle.cpp
//  w06_h01_fireworks
//
//  Created by Peiyu Wang on 10/8/18.
//

#include "Particle.hpp"

Particle::Particle()
{
    
    // default constructor:
    // Particle particle = Particle();
    
    pos = glm::vec2(0,0);
    vel = glm::vec2(0,0);
    color = ofColor(255, 255, 255);
    pre = glm::vec2(0,0);
}

Particle::Particle(glm::vec2 _pos, glm::vec2 _vel, ofColor _color)
{
    
    // "overload" constructor, alternative:
    // Particle particle = Particle(pos,vel,acc);
    
    pos = _pos;
    vel = _vel;
    color = _color;
    
}

void Particle::applyGra()
{
    vel.y += 0.7;
}

void Particle::update()
{
    pre.x = pos.x;
    pre.y = pos.y;
    cout<<pre.x<<endl;

    pos += vel;
    cout<<pos.x<<endl;
   
}

void Particle::draw(){
    ofSetColor(color);
    cout<<pre.x<<endl;
    cout<<pos.x<<endl;
    ofLine(pre.x, pre.y, pos.x, pos.y);
}

