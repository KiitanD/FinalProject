//
// Created by excel on 03/05/2021.
//

#ifndef FINALPROJECT_MAINHEADER_H
#define FINALPROJECT_MAINHEADER_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <fstream>
#include <string>
#include <iterator>
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

vector<rectBlocks> createRectArray(std::string filename);
extern vector<rectBlocks> rectBlockObjects;

vector<sqrBaseRectBlocks> createSqrArray(vector<rectBlocks> rectBlockObjects);
extern vector<sqrBaseRectBlocks> sqrBaseObjects;

vector<cylindricalBlocks> createCylinderArray(vector<sqrBaseRectBlocks> Sqrs);
extern vector<cylindricalBlocks> CylinderObjects;

vector<cuboidBlocks> createCubeArray(vector<sqrBaseRectBlocks> Sqrs);
extern vector<cuboidBlocks> cubeObjects;

vector<sphericalBlocks> createSphereArray(vector<cuboidBlocks> Cubes);
extern vector<sphericalBlocks> sphereObjects;

#endif //FINALPROJECT_MAINHEADER_H