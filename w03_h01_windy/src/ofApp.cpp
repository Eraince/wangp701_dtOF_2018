#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(10);
    for(int i = 0; i < 1; i++){
        
        squares[i].setup(ofGetWidth()/2,i * 50,50,50);
        
       
        
        float hue = ofMap(i*50,0,500,100,200);
        squares[i].color = ofColor::fromHsb(hue,255,200);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < 1; i++){
        squares[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < 1; i++){
        squares[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    glm::vec2 wind = glm::vec2(0.5,0);
    for(int i = 0; i < 1; i++){
        squares[i].applyForce(wind);
    }
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
