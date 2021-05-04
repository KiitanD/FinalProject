#include "mainheader.h"
vector<cuboidBlocks> cubeObjects;

vector<cuboidBlocks> createCubeArray(vector<sqrBaseRectBlocks> Sqrs) {
    
    for(sqrBaseRectBlocks sq: Sqrs) {
        if(sq.height == sq.length) {
            cuboidBlocks cu = cuboidBlocks(sq.width, sq.height, sq.length);
            cubeObjects.push_back(cu);
            cout << "Object" << cu.width << cu.height << cu.length << endl;
        }
    }
    cout<< cubeObjects.size() << endl;
    return cubeObjects;
}
