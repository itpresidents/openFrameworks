//
//  Filter.h
//  emptyExample
//
//  Created by Luisa Pereira on 2/28/14.
//
//

#ifndef __emptyExample__Filter__
#define __emptyExample__Filter__
#include <iostream>
#include "ofMain.h"

class Filter{
public:
    Filter();
    void blackAndWhiteFilter(ofImage& source, ofImage& result);
    void blueFilter(ofImage& source, ofImage& result);
    void reset(ofImage& source, ofImage& result);
    
    int threshold;
};


#endif /* defined(__emptyExample__Filter__) */
