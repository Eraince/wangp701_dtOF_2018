#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,0,0);
    
    active = false;
    sPressed = false;
    leg.setup(true);
    lazyLeg.setup(false);
    cout<<leg.leftFoot.vel.y<<endl;

    dir = glm::vec2(0,0);
   
    for (int y=0; y<20; y++) {          // 10 columns
        for (int x=0; x<15; x++) {      // 10 rows
            
            float posX = ofMap(x, 0, 15, 0, ofGetWidth());
            float posY = ofMap(y, 0, 20, 0, ofGetHeight());
            
            Mover mover( glm::vec2(posX, posY) );       // create the mover / set its position
            
            mover.mass = ofMap( x*y, 0, 100, 2, 20);     // new! assign a mass based on grid order
            
            movers.push_back(mover);
        }
    }
    fullText="hDo you wanna start again? Press s";
    textToDraw = "";
    timeBeginWait = ofGetElapsedTimeMillis();
    myFont.load("Acme-Regular.ttf",32);
    
   
}

//--------------------------------------------------------------
void ofApp::update(){
    if(active){
        glm::vec2 mousePos = leg.getPos();
        
        for (int i=0; i<movers.size(); i++){
            glm::vec2 target    = mousePos - movers[i].pos;
            float distance      = glm::length(target);
            
            if (distance != 0 && distance < 100) {
                
                glm::vec2 direction = target / distance;
                movers[i].applyForce(-direction * 5);
            }
            movers[i].update();
        }
        leg.update(dir);
    }
    if(leg.getPos().y < 0){
        active = false;
        bool isTime = (ofGetElapsedTimeMillis() - timeBeginWait) >= 200;
        if( (fullText.size() > textToDraw.size() ) & isTime ){
           
            textToDraw += fullText[textToDraw.size() + 1];
            timeBeginWait = ofGetElapsedTimeMillis();
        }
    }
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int j = 0; j < 20; j++){
        for(int k = 0; k < 15; k++){
            float posX = ofMap(k, 0, 15, 0, ofGetWidth());
            float posY = ofMap(j, 0, 20, 0, ofGetHeight());
            ofColor color = ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255));
            ofSetColor(color);
            ofDrawRectangle(posX, posY, 68, 40);
        }
    }
    for (int i=0; i<movers.size(); i++)
    {
        movers[i].draw();
    }
    if(active){
        leg.draw();
    }else{
        lazyLeg.draw();
    }
    ofSetColor(0);
    myFont.drawString(textToDraw, 100, 100);
    if(sPressed){
        myFont.drawString("Man, YOLO!", 200, 300);
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == OF_KEY_UP){
        active = true;
        cout<<leg.leftFoot.vel.y<<endl;
        cout<<leg.rightFoot.vel.y<<endl;
    }
    if(key ==  OF_KEY_RIGHT){
        dir = glm::vec2(1,0);
    }else if(key == OF_KEY_LEFT){
        dir = glm::vec2(-1,0);
    }
    
    if(key == 's'){
        sPressed = true;
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
