#include "Point.h"

Point::Point(float x, float y) {
    this->x = x;
    this->y = y;
}

float Point::getX() {
    return x;
}

float Point::getY() {
    return y;
}

void Point::move(Point _Point) {
    x += _Point.getX();
    y += _Point.getY();
}
