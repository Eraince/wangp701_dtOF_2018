#include "ofApp.h"
#include "Circle.h"
int red;
int radius;
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(5);
    ofBackground(255);
    red = 80;
    radius = 350;
    
    for(int i = 0; i < 10; i++){
        circles[i].setup(350,350,radius,red);
        radius -= 50;
        red += 20;
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < 10; i++){
        circles[i].draw();
        circles[i].expand();
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
    red = 80;
    radius = 350;
    
    for(int i = 0; i < 10; i++){
        circles[i].setup(x,y,radius,red);
        radius -= 50;
        red += 20;
    }
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
