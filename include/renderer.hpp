#pragma once

#include <map>
#include <string>

#include "raylib.h"

class Renderer {
public:
    Renderer();
    ~Renderer();

    void initRessources();

    std::map<std::string, TextureCubemap> textures_atlas;
};