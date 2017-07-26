//
//  Particle.cpp
//  02_animation
//
//  Created by kayukawa seita on 2017/07/26.
//
//

#include "Particle.h"

Particle::Particle(ofPoint pos, float radius, ofPoint speed, ofVec3f color, float gravity){
    pos_ = pos;
    radius_ = radius;
    speed_ = speed;
    color_ = color;
    gravity_ = gravity;
}


void Particle::update(){
    speed_.y += gravity_;
    pos_ += speed_;
    
    if(pos_.x < radius_ || pos_.x > ofGetWidth()-radius_){
        speed_.x *= -1;
        if(pos_.x < radius_){
            pos_.x = radius_;
        }
        else{
            pos_.x = ofGetWidth()-radius_;
        }
    }
    
    if(pos_.y < radius_ || pos_.y > ofGetHeight()-radius_){
        speed_.y *= -0.7;
        if(pos_.y > ofGetHeight()-radius_){
            pos_.y = ofGetHeight()-radius_;
        }
        else{
            pos_.y = radius_;
        }
    }
    
}


void Particle::draw(){
    ofSetColor(color_[0], color_[1], color_[2], 128);
    ofDrawCircle(pos_.x, pos_.y, radius_);
}
