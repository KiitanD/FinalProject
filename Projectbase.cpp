#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



//class definitions
class rectBlocks {
    public:
        rectBlocks() {

        };
};


class sqrBaseRectBlocks: public rectBlocks {
    public:
        sqrBaseRectBlocks() {

        };
};

class cylindricalBlocks: public sqrBaseRectBlocks{
    public:
        cylindricalBlocks() {

        };
};

class cuboidBlocks: public sqrBaseRectBlocks {
    public:
        cuboidBlocks() {

        };
};

class sphericalBlocks: public cuboidBlocks {
    public:
        sphericalBlocks() {

        };
};
