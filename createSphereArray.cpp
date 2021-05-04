#include "mainheader.h"
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
