#include "mainheader.h"
#include "createSphereArray.h"
vector<sphericalBlocks> sphereObjects;

vector<sphericalBlocks> createSphereArray(vector<cuboidBlocks> Cubes) {
    for(cuboidBlocks cu: Cubes) {
        sphericalBlocks sp = sphericalBlocks(cu.width, cu.height, cu.length);
        sphereObjects.push_back(sp);
        cout << "Object" << sp.width << sp.height << sp.length << endl;
    }
    cout << sphereObjects.size() << endl;
    return sphereObjects;
    
}
bool greaterDiameter(sphericalBlocks block1, sphericalBlocks block2) {
    return (block1.diameter > block2.diameter);
}

void sortAndPrintSphere(vector<sphericalBlocks> sphereObject) {
    sort(sphereObject.begin(), sphereObject.end(), greaterDiameter);
    for(sphericalBlocks sb : sphereObject) {
        cout << "Spherical Surface Area: " << sb.surface_area << endl;
        cout << "Volume: " << sb.volume << endl;
    }
}
