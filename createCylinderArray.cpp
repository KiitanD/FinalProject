#include "mainheader.h"
#include "createCylinderArray.h"
vector<cylindricalBlocks> cylinderObjects;

vector<cylindricalBlocks> createCylinderArray(vector<sqrBaseRectBlocks> Sqrs) {
    for(sqrBaseRectBlocks sq: Sqrs) {
        cylindricalBlocks cy = cylindricalBlocks(sq.width, sq.height, sq.length);
        cylinderObjects.push_back(cy);
    }
    return cylinderObjects;
    
}

bool greaterSurfaceArea(cylindricalBlocks block1, cylindricalBlocks block2) {
    return (block1.surface_area > block2.surface_area);
}

void sortAndPrintCylinder(vector<cylindricalBlocks> cylinderObjects) {
    sort(cylinderObjects.begin(), cylinderObjects.end(), greaterSurfaceArea);
    cout << "Cylinder Objects: " << endl << endl;
    for (cylindricalBlocks cy : cylinderObjects) {
        cout << "Diameter: " << cy.diameter << endl;    
        cout << "Length: " << cy.length << endl;
        cout << "Surface Area: " << cy.surface_area << endl << endl;
    }
}
