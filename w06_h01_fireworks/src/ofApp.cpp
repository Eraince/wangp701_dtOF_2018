#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = bursts.size() - 1; i >= 0; i--) {
        Burst b = bursts[i];
        b.update();
        if (b.particles.size()==0) {
            cout<<"----------erase------"<<endl;
            bursts.erase(bursts.begin() + i);
            
        };
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
   
    for (int i = bursts.size() - 1; i >= 0; i--) {
        Burst b = bursts[i];
        b.draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    for(int i = 0; i < 1; i++){
        float x = ofRandom(50,500);
        float y = ofRandom(50,850);
        Burst b = Burst(glm::vec2(x,y),3);
        bursts.push_back(b);
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
