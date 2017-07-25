#include "ofApp.h"


float x[1000];
float y[1000];
float radius[1000];
int r[1000];
int g[1000];
int b[1000];



//--------------------------------------------------------------
void ofApp::setup(){
    
    // 背景色の設定
    ofBackground(47,  47, 47);
    
    // アルファチャンネル（透明度）を有効化
    ofEnableAlphaBlending();
    
    // 円の精密度を設定
    ofSetCircleResolution(64);
    
    // 乱数を用いて円のパラメタを設定
    for(int i=0; i<1000; i++){
        x[i] = ofRandom(0, ofGetWidth());
        y[i] = ofRandom(0, ofGetHeight());
        radius[i] = ofRandom(10, 30);
        r[i] = ofRandom(0, 200);
        g[i] = ofRandom(80, 200);
        b[i] = ofRandom(160, 255);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i=0; i<1000; i++){
        ofSetColor(r[i], g[i], b[i]);
        ofDrawCircle(x[i], y[i], radius[i]);
    }
    
    
//    // 線を描く
//    ofSetColor(200, 200, 200);
//    ofDrawLine(100, 300, 200, 500);
//    
//    // 四角形を描く
//    ofSetColor(200, 200, 0, 127);
//    ofDrawRectangle(200, 200, 300, 500);
//    
//    // 三角形を描く
//    ofSetColor(100, 256, 0, 127);
//    ofDrawTriangle(700, 150, 450, 400, 750, 400);
//    
//    // 円を描く
//    ofSetColor(0, 200, 200, 127);
//    ofDrawCircle(400, 200, 100);
//    
//    // 楕円を描く
//    ofSetColor(100, 0, 200, 127);
//    ofDrawEllipse(500, 500, 400, 200);
    
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
