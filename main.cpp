//
// Created by excel on 03/05/2021.
//

#include "mainheader.h"
int main() {
    createRectArray("dataBlocks.dat");
    createSqrArray(rectBlockObjects);
    createCylinderArray(sqrBaseObjects);
    createCubeArray(sqrBaseObjects);
    createSphereArray(cubeObjects);
}
