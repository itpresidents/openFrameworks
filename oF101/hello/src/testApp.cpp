#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    // [P] println("hello");
    cout << "hello" << endl;
    
    // [P] smooth();
    ofEnableAntiAliasing();
    ofSetCircleResolution(50);
    
    minR = 20;
    maxR = 300;
    r = 50;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    // [P] background(0);
    ofBackground(0);

    // set color
    ofSetColor(255, 0, 0, 100);
    
    // [P] fill(255,0,0);
    ofFill();
    
    // [P] stroke(255,0,0);
    //ofNoFill();
    
    // [P] ellipse(width/2,height/2,r,r);
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, 50);
    
    ofSetColor(0,255,0);
    ofFill();
    ofCircle(mouseX, mouseY, r);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    // [P] map(key,'1','9',minR,maxR);
    r = ofMap(key,'1','9',minR,maxR);

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}