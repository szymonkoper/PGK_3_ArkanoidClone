#ifndef HEX_HPP
#define HEX_HPP

#include <algorithm>

using namespace std;

typedef pair<float, float> position;

class Hex
{
public:
    Hex(const position aCenter, const float aRadius);

    vector<position> vertices();




private:
    position center;
    float radius;

    position vertex(const unsigned int i);
};

#endif // HEX_HPP
