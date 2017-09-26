#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(20, 20, 20);
    ofSetCircleResolution(32);
    ofEnableAlphaBlending();
    ofSetFrameRate(30);
    
    // colorの初期値、値域を設定
    ofColor initColor = ofColor(ofRandom(0, 200), ofRandom(80, 200), ofRandom(160, 255), 125);
    ofColor minColor = ofColor(20, 20, 20, 0);
    ofColor maxColor = ofColor(255, 255, 255, 255);
    
    // speedの初期値、地域を設定
    ofVec2f initSpeed = ofVec2f(0, 0);
    ofVec2f minSpeed = ofVec2f(-10.0f, -10.0f);
    ofVec2f maxSpeed = ofVec2f(10.0f, 10.0f);
    
    // set up GUI
    gui.setup();
    gui.add(radius.setup("Radius", 50, 0, 500));
    gui.add(color.setup("color", initColor, minColor, maxColor));
    gui.add(speed.setup("speed", initSpeed, minSpeed, maxSpeed));
    
    Particle newParticle(ofPoint(ofGetWidth()/2, ofGetHeight()/2), 50, initSpeed, initColor, 0);
//Particle(ofPoint pos, float radius, ofVec2f speed, ofColor color, float gravity)
    particles.push_back(newParticle);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<particles.size(); i++){
        particles[i].update();
    }
    
//    if(particles[0].getPos().x < particles[0].getRadius() || particles[0].getPos().x > ofGetWidth()-particles[0].getRadius()){
//        speed = particles[0].getSpeed();
//    }
//    
//    if(particles[0].getPos().y < particles[0].getRadius() || particles[0].getPos().y > ofGetHeight()-particles[0].getRadius()){
//        speed = particles[0].getSpeed();
//    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    particles[0].changeRadius(radius);
    particles[0].changeSpeed(ofVec2f(speed));
    particles[0].changeColor(ofColor(color));
    particles[0].draw();
    
    gui.draw();
    
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
