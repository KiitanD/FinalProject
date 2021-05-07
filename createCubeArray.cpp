//Excel Chukwu and Kiitan Doherty 
#include "mainheader.h"
vector<cuboidBlocks> cubeObjects;

vector<cuboidBlocks> createCubeArray(vector<sqrBaseRectBlocks> Sqrs) {
    
    for(sqrBaseRectBlocks sq: Sqrs) {
        if(sq.height == sq.length) {
            cuboidBlocks cu = cuboidBlocks(sq.width, sq.height, sq.length);
            cubeObjects.push_back(cu);
        }
    }
    return cubeObjects;
}
