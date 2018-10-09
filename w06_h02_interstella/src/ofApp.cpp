#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(31,21,91);
    
    for(int i = 0; i < 60; i++){
        glm::vec2 pos =glm::vec2(ofRandom(-200,1000),ofRandom(-220,900));
        Star s = Star(pos,10,5,0.3,0.4,-500);
        stars.push_back(s);
    }
    
   
   
   
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i = 0; i < 60; i++){
        ofPushMatrix();
        ofTranslate(ofGetWidth()*0.3, ofGetHeight()*0.4);
        float time = ofGetElapsedTimef();
        
        ofRotate(time);
        stars[i].draw();
        ofPopMatrix();
        
    }
   
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
