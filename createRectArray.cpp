#include "mainheader.h"
vector<rectBlocks> rectBlockObjects; 

vector<rectBlocks> createRectArray(std::string fileName) {
    //creating empty vector
    //vector<rectBlocks> rectBlockObjects;

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
    return rectBlockObjects;
}
