//
//  Particle.hpp
//  NormalizationFinal
//
//  Created by Peiyu Wang on 12/10/18.
//

#pragma once
#include "ofMain.h"

class Particle {
    
public:
    
    Particle();
    ~Particle(){}
    
    Particle(glm::vec3 _pos, glm::vec3 _vel, float _life, float _mass);
    
    void applyForce(glm::vec3 force);
    void applyDrag(float amt);
    void setColor(float red, float green, float blue);
    void update();
    void draw();
    
    glm::vec3 pos, vel, acc;
    
    float age = 0; // seconds
    
    float lifespan;    // seconds
    
    float mass;
    ofColor color;
    
    
private:
    
    ofMaterial material;    // shininess
    
    float lastUpdateTime = 0;    // track elapsed time
    
};

