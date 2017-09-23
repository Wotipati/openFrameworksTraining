//
//  HeatMap.cpp
//  04MouseInteraction2
//
//  Created by kayukawa seita on 2017/09/23.
//
//

#include "ColorBar.h"

ofVec3f changeColorLine(float x){
    float r, g, b;
    if(x <= 0.25f){
        r = 0.0f;
        g = x / 0.25f;
        b = 1.0f;
    }
    else if(x > 0.25f && x <= 0.5f){
        r = 0.0f;
        g = 1.0f;
        b = 2.0f - x / 0.25f;
    }
    else if(x > 0.5f && x <= 0.75f){
        r = x / 0.25f - 2;
        g = 1.0f;
        b = 0.0f;
    }
    else{
        r = 1.0f;
        g = 4.0f - x / 0.25f;
        b = 0.0f;
    }
    return ofVec3f(r, g, b);
}


ofVec3f changeColorSin(float x){
    float r, g, b;
    if(x <= 0.25f){
        r = 0.0f;
        g = sin(x*2*M_PI);
        b = 1.0f;
    }
    else if(x > 0.25f && x <= 0.5f){
        r = 0.0f;
        g = 1.0f;
        b = sin(x*2*M_PI);
    }
    else if(x > 0.5f && x <= 0.75f){
        r = -sin(x*2*M_PI);
        g = 1.0f;
        b = 0.0f;
    }
    else{
        r = 1.0f;
        g = -sin(x*2*M_PI);
        b = 0.0f;
    }
    return ofVec3f(r, g, b);
}
