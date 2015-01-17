#ifndef __TestProject__Vehicle__
#define __TestProject__Vehicle__

#include <stdio.h>
#include "ofApp.h"

class Vehicle {
private:
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float r;
    float maxForce;
    float maxSpeed;
    ofVec2f targetLastLocation;
    
    void steer(const ofVec2f & force, ofVec2f desired);
public:
    void setup();
    void update();
    void applyForce(const ofVec2f & force);
    void seek(const ofVec2f & target);
    void flew(const ofVec2f & target);
    void pursuit(const ofVec2f & target);
    void draw();
    void setLocation(float x, float y);
    void setVelocity(float x, float y);
    const ofVec2f& getLocation() const;
    const ofVec2f& getVelocity() const;
};

#endif
