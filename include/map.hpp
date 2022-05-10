#pragma once

#include <vector>

#include "chunk.hpp"
#include "tools.hpp"

#include "constants.hpp"

class Map {
public:
    Map();
    ~Map();

    void createDumymMap();
    void generateChunk();

    std::vector<std::vector<Chunk>> chunks;
};