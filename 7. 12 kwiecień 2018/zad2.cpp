#include <iostream>
#include <point.h>

class Point3d : public pt::Point
{
    private:
        int z;
    public:
        int getz() {
            return z;
        }
        Point3d() : pt::Point(0,0)
        {
            z = 0;
        }
        Point3d(int _x, int _y, int _z) : pt::Point(_x,_y)
        {
            z = _z;
        }
};

int main()
{

    return 0;
}
