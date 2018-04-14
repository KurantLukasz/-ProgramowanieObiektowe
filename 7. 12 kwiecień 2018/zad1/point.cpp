#include "point.h"

int pt::Point::getx() {
    return x;
}
int pt::Point::gety() {
    return y;
}
void pt::Point::sety(int _y)
{
    y = _y;
}
void pt::Point::setx(int _x) {
    x = _x;
}
pt::Point::Point() {
    x = 0; y = 0;
}
pt::Point::Point(int _x, int _y) {
    x = _x; y = _y;
}
