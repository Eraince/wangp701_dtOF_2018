#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    count = 0;
    ofSetFrameRate(1);
    
    for(int i = 0; i < 180; i++){
        
        float x = ofGetWidth()/2 + sin(ofDegToRad(i * 2)) * 300;
        
        float y = ofGetHeight()/2 + cos(ofDegToRad(i * 2)) * 300;
        particles[i].setup(x, y, 2);
     
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < 180; i++){
        particles[i].pos.x = ofGetWidth()/2 + sin(ofDegToRad((i + count) * 2)) * 300;
        particles[i].pos.y = ofGetHeight()/2 + cos(ofDegToRad((i + count) * 2)) * 300;
    }
    count += 1;
    cout << count << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < 180; i++){
        particles[i].draw();
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
