#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetColor(128,0,128);
    ofFill();
    
    //Initialize vectors
    position.set(0, 0);
    direction.set(0, -1);
    velocity.set(-0.3, -0.4);
    angle = direction.angle(velocity); //calcutates in degrees the angle between the direction vector and the velocity vector.

    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth() * 0.5, ofGetHeight() * 0.5);
    ofTranslate(position.x, position.y);
    position = position + velocity;
    
    ofRotateDeg(angle); //Uses the float angle value to rotate the triangle so that it points in the direction of its velocity

    
    //draw the triangle
    ofDrawTriangle(0, 0, -5, 15, 5, 15);
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
