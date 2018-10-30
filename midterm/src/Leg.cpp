//
//  Leg.cpp
//  midterm
//
//  Created by Peiyu Wang on 10/23/18.
//

#include "Leg.hpp"



void Leg::setup(bool active){
    if(active){
    leftFoot.setup("left.png",glm::vec2(ofGetWidth()/2,ofGetHeight() - 100),glm::vec2(0,-10));
    rightFoot.setup("right.png",glm::vec2(ofGetWidth()/2 + 30,ofGetHeight() - 100),glm::vec2(0,-10));
        leftUpdate = false;
        updateFinished = true;
        dir = glm::vec2(0,0);
    }else{
        leftFoot.setup("left.png",glm::vec2(ofGetWidth()/2,ofGetHeight() - 100),glm::vec2(0,0));
        rightFoot.setup("right.png",glm::vec2(ofGetWidth()/2 + 30,ofGetHeight() - 100),glm::vec2(0,0));
    }
}

void Leg::update(glm::vec2 _dir){
    

    if(!leftUpdate){
        leftFoot.update(_dir);
        ofSleepMillis(300);
        leftUpdate = true;
        updateFinished = false;
    }else{
        rightFoot.update(_dir);
        ofSleepMillis(300);
        leftUpdate = false;
        updateFinished = true;
    }
    cout<<"Left"<< leftFoot.vel.y<<endl;
    cout<<"Right"<<rightFoot.vel.y<<endl;
   
    
}


void Leg::draw(){
    
    
    leftFoot.draw(-30);
    
    rightFoot.draw(30);
    
}

glm::vec2 Leg::getPos(){
    return glm::vec2((rightFoot.pos.x - leftFoot.pos.x)/2 + leftFoot.pos.x,leftFoot.pos.y);
    
}

