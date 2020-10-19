#include "ofApp.h"

float loc_x;
float loc_y;
float speed_x;
float speed_y;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    ofSetCircleResolution(64);
    
    loc_x = 0;
    loc_y = 0;
    speed_x = 4;
    speed_y = 7;
}

//--------------------------------------------------------------
void ofApp::update(){
    loc_x = loc_x + speed_x;
    loc_y = loc_y + speed_y;
    
    // case1
    /*
    if (loc_x < 0) {
        loc_x = ofGetWidth();
    }
    if (loc_x > ofGetWidth()) {
        loc_x = 0;
    }
    if (loc_y < 0) {
        loc_y = ofGetHeight();
    }
    if (loc_y > ofGetHeight()) {
        loc_y = 0;
    }
     */
    
    // case2
    if (loc_x < 0) {
        speed_x = speed_x * -1;
    }
    if (loc_x > ofGetWidth()) {
        speed_x = speed_x * -1;
    }
    if (loc_y < 0) {
        speed_y = speed_y * -1;
    }
    if (loc_y > ofGetHeight()) {
        speed_y = speed_y * -1;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(31, 63, 255);
    ofDrawCircle(loc_x, loc_y, 40);
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
