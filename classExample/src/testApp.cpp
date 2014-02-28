#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    myImage.loadImage("hypercube.jpg");
    //get the array of pixels of myImage
    
    mode = NONE;
}

//--------------------------------------------------------------
void testApp::update(){
    filter.threshold = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 255);
    
    if(mode == 0){
        filter.reset(myImage, result);
    }
    else if(mode == 1){
        filter.blackAndWhiteFilter(myImage, result);
    }
    else if(mode == 2){
        filter.blueFilter(myImage, result);
    }
    
}

void testApp::draw(){
    myImage.draw(0,0);
    result.draw(myImage.getWidth(), 0);
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if(key == '0'){
        mode = NONE;
    }
    if(key == '1'){
        mode = BLACK_AND_WHITE;
    }
    else if(key == '2'){
        mode = BLUE;
    }
}

