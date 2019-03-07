#include "ofApp.h"

//int bytesRequired = 12;
//int bytesRemaining = 12;
//int result;
float currentTime;
bool submit;
Cube best;
float red;
float green;
float blue;


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    submit = false;
    myFont.load("Acme-Regular.ttf",32);
// ---------set up serial------------

//    serial.listDevices();
//    serial.setup(0, 9600);
//------------------------------------
    
    
    gui.setup();
    
    gui.add(rating1.setup("rating1",1,1,6));
    gui.add(rating2.setup("rating2",2,1,6));
    gui.add(rating3.setup("rating3",3,1,6));
    gui.add(rating4.setup("rating4",4,1,6));
    gui.add(rating5.setup("rating5",5,1,6));
    gui.add(rating6.setup("rating6",6,1,6));
    
//    ---------------------------------GUI-------------
    cubes[0].setup(255,0,0,1);
    cubes[1].setup(255,255,0,2);
    
    cubes[2].setup(0, 255, 0,3);
    
     cubes[3].setup(0,0,255,4);
    cubes[4].setup(0,255,255,5);
    cubes[5].setup(255, 0, 255,6);
    for(int i = 0; i < 6; i++){
        orders[i] = i + 1;
    }

    
    ofSetVerticalSync(true);
    gravity = ofVec3f(0,.02,0);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
//    --------------------------read data from serial---------------
//    int msg = readBytesFromSerial();
//    string results(bytes);
//    int result = ofToInt(results);
//    cout << result <<endl;
    

//-------------------------------------------------------------------
    
    if(submit){
        
        updateOrder();
        currentTime = ofGetElapsedTimef();
        for(int i = 0; i < 6; i++){
            if(cubes[i].rating == 1){
                best = cubes[i];
                red = best.r;
                green = best.g;
                blue = best.b;
            }
        }
        for(int i = 0; i < 6; i++){
            cubes[i].changeColor(best, cubes[i].rating);
            cout<<cubes[i].rating<<endl;
            cout<<cubes[i].finalR<<endl;
            cout<<cubes[i].finalG<<endl;
            cout<<cubes[i].finalB<<endl;
        }
        submit = false;
    }
    if(ofGetElapsedTimef() - currentTime <= 5 && currentTime != 0){
        for(int i = 0; i < 6; i++){
            cubes[i].update(currentTime);
        }
        for (int i=0; i<10; i++)
        {
            Particle p;
            p.vel.x = ofRandom(-4,4);
            p.vel.y = ofRandom(-1,4);    // up
            p.vel.z = ofRandom(-1,1);
            p.lifespan = ofRandom(9,13);
            p.mass = ofRandom(.7,1.3);
            p.setColor(red,green,blue);
            particles.push_back(p);
        }

    }
    
    while (particles.size() > 800)
    {
        particles.erase(particles.begin());
    }
    
    for (int i=0; i<particles.size(); i++)
    {
        particles[i].applyForce(gravity);
        particles[i].update();
    }
}



void ofApp::updateOrder(){
    cubes[0].rating = rating1;
    orders[0] = rating1;
    cubes[1].rating = rating2;
    orders[1] = rating2;
    cubes[2].rating = rating3;
    orders[2] = rating3;
    cubes[3].rating = rating4;
    orders[3] = rating4;
    cubes[4].rating = rating5;
    orders[4] = rating5;
    cubes[5].rating = rating6;
    orders[5] = rating6;

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < 6; i++){
        Cube best;
        ofEnableDepthTest();
        cubes[i].draw();
        if(cubes[i].rating == 1){
            best = cubes[i];
        }
        for (int i=0; i<particles.size(); i++)
        {
            particles[i].draw();
            
        }
        ofDisableDepthTest();
        float xPos;
        float yPos;
        if(cubes[i].rating == 1){
            xPos = ofGetWidth()/2;
            yPos = ofGetHeight()/4;
        }else{
            xPos = ofGetWidth()/5 * (cubes[i].rating - 2) + 110;
            yPos = ofGetHeight()/2 + ofGetHeight() / 5;
        }
        myFont.drawString(ofToString(i + 1), xPos, yPos + 120);
    }

    
    gui.draw();
}




//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    submit = true;
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
