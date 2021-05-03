#include "mainheader.h"
using namespace std;


//class definitions
class rectBlocks {
    public:
        int width;
        int height;
        int length;
        int volume;
        int surface_area;
        rectBlocks() {
            width = 0;
            height = 0;
            length = 0;
        }
        rectBlocks(int w, int h, int l) {
            width = w;
            height = h;
            length = l;
            volume = h * w * l;
            surface_area = 2*(h*w) + 2*(h*l) + 2*(w*l);    
        };
};


class sqrBaseRectBlocks: public rectBlocks {
    public:
        sqrBaseRectBlocks(int w, int h, int l):rectBlocks(w, h, l) {};
};

class cylindricalBlocks: public sqrBaseRectBlocks{
    public:
        int diameter;
        int radius;
        cylindricalBlocks(int w, int h, int l): sqrBaseRectBlocks(w, h, l) {
            diameter = w;
            radius = diameter/2;
            float volume = M_PI * pow(radius, 2) * l;
            float surface_area = 2 * M_PI * radius * (radius + l);
        };
};

class cuboidBlocks: public sqrBaseRectBlocks {
    public:
        cuboidBlocks(int w, int h, int l): sqrBaseRectBlocks(w, h, l) {};
};

class sphericalBlocks: public cuboidBlocks {
    public:
        int diameter;
        int radius;
        sphericalBlocks(int w, int h, int l): cuboidBlocks(w, h, l) {
            diameter = w;
            radius = diameter/2;
            float volume = 4 * M_PI * pow(radius, 3)/3;
            float surface_area = 4 * M_PI * pow(radius, 2);
        };
};


/*
 * function takes a file containing dimensions
 * as a parameter, creates objects from the
 * dimensions, then stores the objects in a vector.
 *
 */
void createArray(std::string fileName) {
    //creating empty vector
    vector<rectBlocks> rectBlockObjects;

    //reading the file
    ifstream dataFile(fileName);
    if (dataFile.is_open()) {
        while(dataFile) {
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
}