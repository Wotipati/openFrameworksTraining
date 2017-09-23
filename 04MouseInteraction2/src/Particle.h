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
    Particle(ofPoint, float, ofPoint, ofVec3f, float);
    void update();
    void draw();
    ofPoint getPos();
    float getRadius();
    ofPoint getSpeed();
    ofVec3f getColor();
    void changeSpeed(ofPoint);
    
private:
    ofPoint pos_;
    float radius_;
    ofPoint speed_;
    ofVec3f color_;
    float gravity_;
};

#endif /* Particle_h */
