#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(false);
    
    syphon.setName("Screen Output");
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    testCard();
    
    ofFill();
    syphon.publishScreen();
    
    
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

void ofApp::testCard(){
    
    ofBackground(0);
    
    ofSetLineWidth(3);
    ofSetColor(255);
    ofNoFill();
    ofDrawRectangle(0, 0 , ofGetWidth(), ofGetHeight());
    
    ofSetCircleResolution(64);
    if (ofGetWidth() > ofGetHeight()){
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, ofGetHeight()/2);
    } else {
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2);
    }
    
    string fpsStr = "FPS:"+ofToString(ofGetFrameRate(), 0);
    ofDrawBitmapString(fpsStr, 30,30);

}
