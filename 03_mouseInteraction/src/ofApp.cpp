#include "ofApp.h"
#include <math.h>

float gravity = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetCircleResolution(32);
    ofEnableAlphaBlending();
    ofSetFrameRate(30);
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
    if (key == OF_KEY_RETURN){
        ofPoint pos, speed;
        pos.x = ofGetWidth()/2;
        pos.y = ofGetHeight()/2;
        speed.x = ofRandom(-5, 5);
        speed.y = ofRandom(-5, 5);
        float radius = ofRandom(30, 50);
        ofVec3f color;
        color[0] = ofRandom(0, 200);
        color[1] = ofRandom(80, 200);
        color[2] = ofRandom(160, 255);
        
        Particle newParticle(pos, radius, speed, color, gravity);
        particles.push_back(newParticle);
    }
    
    else if (key == 'r'){
        particles.clear();
    }
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
    for(int i=0; i<particles.size(); i++){
        ofPoint pos = particles[i].getPos();
        float radius = particles[i].getRadius();
        ofPoint speed = particles[i].getSpeed();
        float dist = ofDist(pos.x, pos.y, mouseX, mouseY);
        float theta = atan2(speed.y,speed.x);
        
        if(dist<radius){
            for(int j=0; j<3; j++){
                ofPoint newSpeed;
                newSpeed.x = sqrt(speed.x*speed.x + speed.y*speed.y) * cos(theta + PI*(j+1)/2);
                newSpeed.y = sqrt(speed.x*speed.x + speed.y*speed.y) * sin(theta + PI*(j+1)/2);
                float newRadius = radius;
                ofVec3f newColor;
                newColor[0] = ofRandom(0, 200);
                newColor[1] = ofRandom(80, 200);
                newColor[2] = ofRandom(160, 255);
                
                Particle newParticle(pos, newRadius, newSpeed, newColor, gravity);
                particles.push_back(newParticle);
            }
            break;
        }
    }

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
