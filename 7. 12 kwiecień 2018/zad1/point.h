#ifndef POINT_H
#define POINT_H

namespace pt {
    class Point {
    private:
        int x, y;
    public:
        int getx();
        int gety();
        void sety(int _y);
        void setx(int _x);
        Point();
        Point(int, int);
    };
}
#endif // POINT_H
