#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Cube.hpp"
#include "Particle.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
//        int readBytesFromSerial();
//        void convertOrder(char serialData[]);
        void updateOrder();
    
    
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
        Cube cubes[6];
    
        ofxPanel gui;
        ofxIntSlider rating1;
        ofxIntSlider rating2;
        ofxIntSlider rating3;
        ofxIntSlider rating4;
        ofxIntSlider rating5;
        ofxIntSlider rating6;
    
        vector<Particle> particles;
    
        ofLight pointLight;
        ofLight pointLight2;
        ofEasyCam cam;
        int orders[6];
        ofTrueTypeFont myFont;
        glm::vec3 gravity;
    
		
};
