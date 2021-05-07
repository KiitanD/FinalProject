//Excel Chukwu and Kiitan Doherty 
#include "mainheader.h"
vector<sqrBaseRectBlocks> sqrBaseObjects;

vector<sqrBaseRectBlocks> createSqrArray(vector<rectBlocks> Rects) {
    
    for(rectBlocks rb: Rects) {
        if (rb.width == rb.height) {
            sqrBaseRectBlocks sb = sqrBaseRectBlocks(rb.width, rb.height, rb.length);
            
            sqrBaseObjects.push_back(sb);
        }
    }
    return sqrBaseObjects;
    
}
