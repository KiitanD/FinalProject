
#include "mainheader.h"
#include "createCylinderArray.h"
#include "createSphereArray.h"

int main() {
    createRectArray("dataBlocks.dat");
    createSqrArray(rectBlockObjects);
    vector<cylindricalBlocks> cylinderBlockObjects = createCylinderArray(sqrBaseObjects);
    createCubeArray(sqrBaseObjects);
    vector<sphericalBlocks> sphericalBlockObjects = createSphereArray(cubeObjects);

    //sorting the vectors and displaying respective values:
    //sphere objects
    sortAndPrintSphere(sphericalBlockObjects);

    //cylindrical objects
    sortAndPrintCylinder(cylinderBlockObjects);
}
