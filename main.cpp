
#include "mainheader.h"
#include "createCylinderArray.h"
#include "createSphereArray.h"

int main() {
    createRectArray("dataBlocks.dat");
    createSqrArray(rectBlockObjects);
    createCylinderArray(sqrBaseObjects);
    createCubeArray(sqrBaseObjects);
    createSphereArray(cubeObjects);

    //sorting the vectors and displaying respective values:
    //sphere objects
    sortAndPrintSphere(sphereObjects);

    //cylindrical objects
    sortAndPrintCylinder(cylinderObjects);
}
