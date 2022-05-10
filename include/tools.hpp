#pragma once

#include "../extlib/random/random.hpp"

#include "raylib.h"

namespace Random {
    using EffoRandom = effolkronium::random_static;
    int get_int(int lower, int higher, int seed=7);
}