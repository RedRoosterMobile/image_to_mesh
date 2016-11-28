#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    image.load("stars.png");
    // image.load("sofa250x250.png");
    image.resize(200, 200);
    
    mesh.setMode(OF_PRIMITIVE_POINTS);
    mesh.enableColors();
    
    float intensityThreshold = 150.0;
    int w = image.getWidth();
    int h = image.getHeight();
    for (int x=0; x<w; ++x) {
        for (int y=0; y<h; ++y) {
            ofColor c = image.getColor(x, y);
            float intensity = c.getLightness();
            /*if (intensity >= intensityThreshold) {
                ofVec3f pos(x, y, 0.0);
                mesh.addVertex(pos);
                // When addColor(...), the mesh will automatically convert
                // the ofColor to an ofFloatColor
                mesh.addColor(c);
            }*/
            // shrunken image
            if (intensity >= intensityThreshold) {
                // We shrunk our image by a factor of 4, so we need to multiply our pixel
                // locations by 4 in order to have our mesh cover the openFrameworks window
                ofVec3f pos(x*4, y*4, 0.0);
                mesh.addVertex(pos);
                mesh.addColor(c);
            }
        }
    }
    // With a threshold of 150, there will be ~64,000 vertices
    cout << mesh.getNumVertices() << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // image.draw(0,0);
    ofColor centerColor = ofColor(85, 78, 68);
    ofColor edgeColor(0, 0, 0);
    ofBackgroundGradient(centerColor, edgeColor, OF_GRADIENT_CIRCULAR);
    mesh.draw();
    
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
