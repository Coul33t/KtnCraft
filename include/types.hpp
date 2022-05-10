#pragma once

#include "raylib.h"

template <typename T>
using array3 = std::vector<std::vector<std::vector<T>>>;

template <typename T>
using array2 = std::vector<std::vector<T>>;

template <typename T>
using array1 = std::vector<T>;

template<typename T>
struct mVec2
{
    union {
        struct { T x, y;};
        struct { T w, h;};
    };

    Vector2 asV2() {
        Vector2 vec;
        vec.x = x;
        vec.y = y;
        return vec;
    }
};

template<typename T>
struct mVec3
{
    union {
        struct { T x, y, z;};
        struct { T w, h, d;};
    };

    Vector3 asV3() {
        Vector3 vec;
        vec.x = x;
        vec.y = y;
        vec.z = z;
        return vec;
    }
};