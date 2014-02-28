//
//  Filter.cpp
//  emptyExample
//
//  Created by Luisa Pereira on 2/28/14.
//
//

#include "Filter.h"


Filter::Filter(){
    threshold = 100;
}

void Filter::reset(ofImage& source, ofImage& result){
    result.clone(source);
    result.reloadTexture();
}

void Filter::blackAndWhiteFilter(ofImage& source, ofImage& result){
    result.clone(source);
    unsigned char *pixels = result.getPixels();
    
    for(int y=0; y<result.getHeight(); y++){
        for(int x=0; x<result.getWidth(); x++){
            int index = y * result.getWidth()*3 + x*3;
            
            int r = pixels[index];
            int g = pixels[index + 1];
            int b = pixels[index + 2];
            
            if(r+g+b > threshold){
                //make pixel white
                pixels[index] = 255; //red
                pixels[index + 1] = 255;
                pixels[index + 2] = 255;
            }
            else{
                //make pixel black
                pixels[index] = 0; //red
                pixels[index + 1] = 0;
                pixels[index + 2] = 0;
                
            }
            
        }
    }
    result.reloadTexture();
}

void Filter::blueFilter(ofImage& source, ofImage& result){
    result.clone(source);
    unsigned char *pixels = result.getPixels();
    
    for(int y=0; y<result.getHeight(); y++){
        for(int x=0; x<result.getWidth(); x++){
            int index = y * result.getWidth()*3 + x*3;
            
            int r = pixels[index];
            int g = pixels[index + 1];
            int b = pixels[index + 2];
            
            pixels[index] = threshold;
            
            
        }
    }
    result.reloadTexture();
}