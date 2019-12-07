#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    img.load("kirby.png");
    
    int width = img.getWidth();
    int height = img.getHeight();

}

//--------------------------------------------------------------
void ofApp::update()
{
    angleDegrees += 2;

    scaleX += ofRandom(-1,1);
    scaleY += ofRandom(-1,1);
}


void ofApp::draw()
{
    ofBackground(ofColor::hotPink);
    
    float centerX = ofGetWidth() / 2;
    float centerY = ofGetHeight() / 2;

    ofPushMatrix();
    ofTranslate(centerX,centerY); // create a new origin @ centerX, centerY
//    ofDrawEllipse(0,0,10,10);
    img.load("kirby.png");
    
    int width = img.getWidth();
    int height = img.getHeight();

    img.draw(ofGetWidth()/2, ofGetHeight()/2);

    ofRotateZDeg(angleDegrees);
    ofDrawCircle(ofGetWidth()/2,ofGetHeight()/2,10);

    ofPushMatrix();
        ofTranslate(200,200,0);
        ofRotateZDeg(45);
        img.draw(-ofGetWidth()/2, -ofGetHeight()/2);
    ofPopMatrix();
}
