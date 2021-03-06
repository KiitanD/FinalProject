//Excel Chukwu and Kiitan Doherty 
#include "mainheader.h"
#include "createSphereArray.h"
vector<sphericalBlocks> sphereObjects;

vector<sphericalBlocks> createSphereArray(vector<cuboidBlocks> Cubes) {
    for(cuboidBlocks cu: Cubes) {
        sphericalBlocks sp = sphericalBlocks(cu.width, cu.height, cu.length);
        sphereObjects.push_back(sp);
    }
    return sphereObjects;
    
}
bool greaterDiameter(sphericalBlocks block1, sphericalBlocks block2) {
    return (block1.diameter > block2.diameter);
}

void sortAndPrintSphere(vector<sphericalBlocks> sphereObjects) {
    sort(sphereObjects.begin(), sphereObjects.end(), greaterDiameter);
    cout<< "Sphere Objects: " << endl << endl;
    for(sphericalBlocks sp : sphereObjects) {
        cout << "Diameter: " << sp.diameter << endl;
        cout << "Spherical Surface Area: " << sp.surface_area << endl;
        cout << "Volume: " << sp.volume << endl << endl;
    }
}
