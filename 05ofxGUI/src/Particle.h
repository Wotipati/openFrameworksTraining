//
//  Particle.h
//  02_animation
//
//  Created by kayukawa seita on 2017/07/26.
//
//

#ifndef Particle_h
#define Particle_h

#include <stdio.h>
#include "ofMain.h"

class Particle{
public:
    Particle(ofPoint, float, ofVec2f, ofColor, float);
    void update();
    void draw();
    ofPoint getPos();
    float getRadius();
    ofVec2f getSpeed();
    ofColor getColor();
    void changePosition(ofPoint);
    void changeRadius(float);
    void changeSpeed(ofVec2f);
    void changeColor(ofColor);
    
private:
    ofPoint pos_;
    float radius_;
    ofVec2f speed_;
    ofColor color_;
    float gravity_;
};

#endif /* Particle_h */
