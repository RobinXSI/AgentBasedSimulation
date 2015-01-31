#include "ofApp.h"
#include "Vehicle.h"

Vehicle v;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1024, 768);
    ofEnableSmoothing();
    ofBackground(255);
    v.setup();
    v.setLocation(ofGetWidth() / 2, ofGetHeight() / 2);
}

//--------------------------------------------------------------
void ofApp::update(){
    //v.pursuit(ofVec2f(mouseX, mouseY));
    v.arrive(ofVec2f(mouseX, mouseY));

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
