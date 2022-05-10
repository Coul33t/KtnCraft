#include "../include/map.hpp"

Map::Map() {

}

Map::~Map() {

}

void Map::createDumymMap() {
    std::vector<Chunk> chunk_vec;
    Chunk chunk;
    chunk.generateRandomChunk();
    chunk_vec.push_back(chunk);
    chunks.push_back(chunk_vec);
}