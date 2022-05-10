#pragma once

#include "raylib.h"

#include "tools.hpp"
#include "types.hpp"
#include "constants.hpp"

class Cube {
public:
    Cube();
    Cube(int x, int y, int z);
    ~Cube();

    /** Returns the world position offsetted by the cube size.
     * NOTE: the y and z coordiantes are swapped in the returned
     * vector because of the difference between 3D representation
     * in RayLib vs the one I use. **/
    Vector3 getCubeWorldPosition();

    mVec3<int> pos;
    Color colour;
    bool exists;
};