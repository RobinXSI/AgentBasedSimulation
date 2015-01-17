#include "ofApp.h"
#include "Vehicle.h"

Vehicle v;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 200);
    ofEnableSmoothing();
    ofBackground(255);
    v.setup();
    v.setLocation(ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
    v.seek(ofVec2f(mouseX, mouseY));
    v.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetHexColor(200);
    ofEllipse(mouseX, mouseY, 48, 48);
    v.draw();

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
