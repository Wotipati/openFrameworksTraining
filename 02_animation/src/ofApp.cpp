#include "ofApp.h"

int NUM = 500;
float gravity = 0.3;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetCircleResolution(32);
    ofEnableAlphaBlending();
    ofSetFrameRate(30);
    
    for(int i=0; i<NUM; i++){
        ofPoint pos, speed;
        pos.x = ofRandom(0, ofGetWidth());
        pos.y = ofRandom(0, ofGetHeight());
        speed.x = ofRandom(-10, 10);
        speed.y = ofRandom(-10, 10);
        float radius = ofRandom(10, 30);
        ofVec3f color;
        color[0] = ofRandom(0, 200);
        color[1] = ofRandom(80, 200);
        color[2] = ofRandom(160, 255);
        
        Particle particle(pos, radius, speed, color, gravity);
        particles.push_back(particle);
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<particles.size(); i++){
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<particles.size(); i++){
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
