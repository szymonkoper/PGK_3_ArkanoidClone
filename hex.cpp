#include "hex.hpp"
#include <cmath>

using namespace std;

const unsigned int VERTICES_COUNT = 6;

Hex::Hex(const position aCenter, const float aRadius)
    : center(aCenter), radius(aRadius) {}

vector<position> Hex::vertices()
{
    vector<position> vecVertices;
    vecVertices.reserve(VERTICES_COUNT);

    for (unsigned int i = 0; i < VERTICES_COUNT; ++i)
        vecVertices.push_back(vertex(i));

    return vecVertices;
}

position Hex::vertex(const unsigned int i)
{
    float angle = 2.0f * M_PI / VERTICES_COUNT * (i + 0.5f);

    float x = center.first  + radius * cos(angle);
    float y = center.second + radius * sin(angle);

    return position(x, y);
}
