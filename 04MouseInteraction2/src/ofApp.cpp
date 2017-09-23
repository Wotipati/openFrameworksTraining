#include "ofApp.h"
#include <math.h>

float gravity = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(20, 20, 20);
    ofSetCircleResolution(32);
    ofEnableAlphaBlending();
    ofSetFrameRate(30);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<particles.size(); i++){
        particles[i].update();
    }
    if(particles.size() > 0){
        for(int i=0; i<particles.size(); i++){
            ofPoint diff = ofPoint(mouseX-particles[i].getPos().x, mouseY-particles[i].getPos().y);
            float speed = sqrt(particles[i].getSpeed().x*particles[i].getSpeed().x + particles[i].getSpeed().y*particles[i].getSpeed().y);
            particles[i].changeSpeed((particles[i].getSpeed()/speed + diff/(sqrt(diff.x*diff.x+diff.y*diff.y))*attraction));
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<particles.size(); i++){
        particles[i].draw();
    }
    ofSetColor((int)255*changeColorSin(attraction/10+0.5f).x, (int)255*changeColorSin(attraction/10+0.5f).y, (int)255*changeColorSin(attraction/10+0.5f).z, 180);
    ofDrawRectangle(0, 0, 10, ofGetHeight());
    ofDrawRectangle(10, 0, ofGetWidth()-10, 10);
    ofDrawRectangle(10, ofGetHeight()-10, ofGetWidth()-10, 10);
    ofDrawRectangle(ofGetWidth()-10, 10, 10, ofGetHeight()-20);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == '0'){
        particles.clear();
        resetParticles(1, particles);
    }
    else if (key == '1'){
        particles.clear();
        resetParticles(5, particles);
    }
    else if (key == '2'){
        particles.clear();
        resetParticles(25, particles);
    }
    else if (key == '3'){
        particles.clear();
        resetParticles(125, particles);
    }
    else if (key == '4'){
        particles.clear();
        resetParticles(625, particles);
    }
    
    else if (key == OF_KEY_UP){
        attraction += 0.5f;
    }
    else if (key == OF_KEY_DOWN){
        attraction -= 0.5f;
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



void ofApp::resetParticles(int total, std::vector<Particle>& particles){
    for(int i=0; i<total; i++){
        ofPoint newPos = 2*ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        ofPoint newSpeed = ofPoint(0, 0);
        float newRadius = ofRandom(5, 20);
        ofVec3f newColor = ofVec3f(ofRandom(0, 200), ofRandom(80, 200), ofRandom(160, 255));
        
        Particle newParticle(newPos, newRadius, newSpeed, newColor, gravity);
        particles.push_back(newParticle);
    }
}
