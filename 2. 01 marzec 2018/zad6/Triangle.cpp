#include "triangle.h"
#include <cmath>

float distancee(Point _Point1, Point _Point2) {
    return sqrt(pow(_Point1.getX()-_Point2.getX(),2) + pow(_Point1.getY()-_Point2.getY(),2));
}

Triangle::Triangle(Point _P1, Point _P2, Point _P3)
{
    this->P1 = _P1;
    this->P2 = _P2;
    this->P3 = _P3;
}

float Triangle::perimeter() {
    return distancee(P1,P2) + distancee(P2,P3) + distancee(P3,P1);
}

float Triangle::area() {
    float p = (distancee(P1,P2) + distancee(P2,P3) + distancee(P3,P1))/2;
    return sqrt(p*(p-distancee(P1,P2))*(p-distancee(P2,P3))*(p-distancee(P1,P3)));
}



