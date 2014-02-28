#pragma once

#include "ofMain.h"
#include "Filter.h"

#define NONE 0;
#define BLACK_AND_WHITE 1;
#define BLUE 2;

class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
    
    ofImage myImage;
    ofImage result;
    Filter filter;
    
    int mode;
    
    
    
    
    
    
    
    
};
