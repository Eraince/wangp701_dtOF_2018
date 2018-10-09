//
//  Burst.cpp
//  w06_h01_fireworks
//
//  Created by Peiyu Wang on 10/8/18.
//

#include "Burst.hpp"


Burst::Burst()
{
    pos = glm::vec2(0,0);       // default value
}

Burst::Burst(glm::vec2 _pos,int _qty)
{
    pos = _pos;
    qty = _qty;
    ofColor c = ofColor(ofRandom(100, 255), ofRandom(100, 255), ofRandom(100, 255));
    
    for (int i = 0; i < qty; i++){
        float vx = ofRandom(-20, 20);
        float vy = ofRandom(0, 20);
        if (ofRandom(1) < 0.8)
            vy *= -1.5;
        Particle particle = Particle(pos,glm::vec2(vx,vy),c);
        particles.push_back(particle);
    }
}



void Burst::update()
{
    for (int i = particles.size() - 1; i >= 0; i--){
        Particle p = particles[i];
        cout<<i<<endl;
        p.update();
        cout<<"-------updated--------"<<endl;
        
        if (p.pos.y > ofGetHeight() || p.pos.x < 0 || p.pos.x > ofGetWidth()) {
            particles.erase(particles.begin() + i);
        };
    }

}

void Burst::draw(){
    for (int i = particles.size() - 1; i >= 0; i--){
        Particle p = particles[i];
        cout<<i<<endl;
        p.draw();
        cout<<"--------------drew-------"<<endl;
        
    }
}


