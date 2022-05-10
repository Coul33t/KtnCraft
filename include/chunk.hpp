#pragma once

#include <iostream>
#include "types.hpp"
#include "cube.hpp"
#include "constants.hpp"


struct Chunk {
    mVec2<int> pos;
    array3<Cube> blocks;

    Chunk() {
        pos.x = 0;
        pos.y = 0;
        InitChunk();
    }

    Chunk(int x, int y) {
        pos.x = x;
        pos.y = y;
        InitChunk();
    }

    /** Reserves the size of a chunk **/
    void InitChunk() {
        for (size_t i = 0; i < CHUNK_SIZE; i++) {
            array2<Cube> row;

            for (size_t j = 0; j < CHUNK_SIZE; j++) {
                array1<Cube> height;
                height.resize(TOP_LIMIT - BOTTOM_LIMIT);
                row.push_back(height);
            }

            blocks.push_back(row);
        }

        /*std::cout << "[DEBUG: blocks.size() = " << blocks.size() << "]" << std::endl;

        for (auto it = blocks.begin(); it != blocks.end(); it++) {
            std::cout << "    [DEBUG: (*it).size() = " << (*it).size() << "]" << std::endl;
            for (auto it2 = (*it).begin(); it2 != (*it).end(); it2++) {
                std::cout << "        [DEBUG: (*it2).size() = " << (*it2).size() << "]" << std::endl;
            }
            std::cout << "[DEBUG: (*it) finished]" << std::endl;
        }*/


    }

    void generateRandomChunk() {
        for (size_t x = 0; x < CHUNK_SIZE; x++) {
            for (size_t y = 0; y < CHUNK_SIZE; y++) {
                for (size_t height = 0; height < abs(BOTTOM_LIMIT) + Random::get_int(-1, 1); height++) {
                    blocks[x][y][height] = Cube(x, y, height + BOTTOM_LIMIT);
                }
            }
        }
    }
};