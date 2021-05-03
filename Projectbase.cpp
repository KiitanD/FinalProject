#include "mainheader.h"

vector <rectBlocks> rectBlockObjects;
vector <sqrBaseRectBlocks> sqrBaseObjects;
vector<cylindricalBlocks> cylinderObjects;
/*
 * function takes a file containing dimensions
 * as a parameter, creates objects from the
 * dimensions, then stores the objects in a vector.
 *
 */
vector<rectBlocks> createRectArray(std::string fileName) {


    //reading the file
    ifstream dataFile(fileName);
    if (dataFile.is_open()) {
        while(!dataFile.eof()) {
            //creating rectBlock object
            rectBlocks rectBlock;

            dataFile >> rectBlock.width;
            dataFile >> rectBlock.height;
            dataFile >> rectBlock.length;

            rectBlockObjects.push_back(rectBlock);
        }
        dataFile.close();
    }
    else cout << "Unable to open file.";
    cout << rectBlockObjects.size() << endl;
    return rectBlockObjects;
}

 vector<sqrBaseRectBlocks> createSqrArray(vector<rectBlocks> Rects) { 
    
     for(rectBlocks rb: Rects) {
        if (rb.width == rb.height) {
            sqrBaseRectBlocks sb = sqrBaseRectBlocks(rb.width, rb.height, rb.length);
            
            sqrBaseObjects.push_back(sb);
            cout << "Object" << sb.width << sb.height << sb.length << endl;
        }
     }
    cout<< sqrBaseObjects.size() << endl;
    return sqrBaseObjects;
    
 }

vector<cylindricalBlocks> createCylinderArray(vector<sqrBaseRectBlocks> Sqrs) {
    
    for(sqrBaseRectBlocks sb: Sqrs) {
        cylindricalBlocks cb = cylindricalBlocks(sb.width, sb.height, sb.length);
        cylinderObjects.push_back(cb);
        cout << "Object" << cb.width << cb.height << cb.length << endl;
    }
    cout<< cylinderObjects.size() << endl;
    return cylinderObjects;
    
}


//function for sorting sphericalBlocks array based on diameter
bool greaterDiameter(sphericalBlocks block1, sphericalBlocks block2) {
    return (block1.diameter > block2.diameter);
}

//function to sort cylindricalBlocks array based on surface area
bool greaterSurfaceArea(cylindricalBlocks block1, cylindricalBlocks block2) {
    return (block1.surface_area > block2.surface_area);
}