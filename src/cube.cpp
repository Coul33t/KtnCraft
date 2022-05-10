#include "../include/cube.hpp"

Cube::Cube() {
    exists = true;
}

Cube::~Cube() {

}

Cube::Cube(int x, int y, int z) {
    pos.x = x;
    pos.y = y;
    pos.z = z;

    exists = true;

    if(z < 0)
        colour = BLUE;

    else if(z == 0)
        colour = GREEN;

    else if (z > 0)
        colour = GRAY;
}

Vector3 Cube::getCubeWorldPosition() {
    Vector3 true_pos;
    true_pos.x = pos.x * CUBE_SIZE;
    true_pos.z = pos.y * CUBE_SIZE;
    true_pos.y = pos.z * CUBE_SIZE;
    return true_pos;
}