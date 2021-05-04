#include "mainheader.h"

//function for sorting sphericalBlocks array based on diameter
bool greaterDiameter(sphericalBlocks block1, sphericalBlocks block2) {
    return (block1.diameter > block2.diameter);
}

//function to sort cylindricalBlocks array based on surface area
bool greaterSurfaceArea(cylindricalBlocks block1, cylindricalBlocks block2) {
    return (block1.surface_area > block2.surface_area);
}