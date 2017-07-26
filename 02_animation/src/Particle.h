//
//  Particle.h
//  02_animation
//
//  Created by kayukawa seita on 2017/07/26.
//
//

#ifndef Particle_h
#define Particle_h

//#pragma once

#include <stdio.h>
#include "ofMain.h"

class Particle{
public:
    Particle(ofPoint, float, ofPoint, ofVec3f, float);
    void update();
    void draw();
    
private:
    ofPoint pos_;
    float radius_;
    ofPoint speed_;
    ofVec3f color_;
    float gravity_;
};

#endif /* Particle_h */
