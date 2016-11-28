#pragma once

// example from: http://openframeworks.cc/ofBook/chapters/generativemesh.html
// IDEA: connect jitter with sound http://openframeworks.cc/ofBook/chapters/sound.html

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

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
    
    ofImage image;
    ofMesh mesh;
    ofEasyCam easyCam;
    vector<ofVec3f> offsets;
    
    // We are going to use these to allow us to toggle orbiting on and off
    ofMesh meshCopy;
    bool orbiting;
    float startOrbitTime;
    
    // These variables will let us store the polar coordinates of each vertex
    vector<float> distances;
    vector<float> angles;
    ofVec3f meshCentroid;
		
};
