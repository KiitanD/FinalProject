#include "mainheader.h"
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
