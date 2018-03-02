#include "point.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle
{
    private:
        Point P1,P2,P3;
    public:
        Triangle(Point _P1, Point _P2, Point _P3);
        float perimeter();
        float area();
};

#endif // TRIANGLE_H
