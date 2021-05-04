#include "mainheader.h"
#include "createCylinderArray.h"
vector<cylindricalBlocks> cylinderObjects;

vector<cylindricalBlocks> createCylinderArray(vector<sqrBaseRectBlocks> Sqrs) {
    for(sqrBaseRectBlocks sq: Sqrs) {
        cylindricalBlocks cy = cylindricalBlocks(sq.width, sq.height, sq.length);
        cylinderObjects.push_back(cy);
        cout << "Object" << cy.width << cy.height << cy.length << endl;
    }
    cout<< cylinderObjects.size() << endl;
    return cylinderObjects;
    
}

bool greaterSurfaceArea(cylindricalBlocks block1, cylindricalBlocks block2) {
    return (block1.surface_area > block2.surface_area);
}

void sortAndPrintCylinder(vector<cylindricalBlocks> cylinderObject) {
    sort(cylinderObject.begin(), cylinderObject.end(), greaterSurfaceArea);
    for (cylindricalBlocks cb : cylinderObject) {
        cout << "Diameter: " << cb.diameter << endl;
        cout << "Length: " << cb.length << endl;
        cout << "Area: " << cb.surface_area << endl;
    }
}
