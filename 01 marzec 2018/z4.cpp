#include <iostream>
#include <cmath>

using namespace std;


class Point {
    private:
        float x, y;
    public:
        Point(float x, float y) {
            this->x = x;
            this->y = y;
        }

        float getX() {
            return x;
        }

        float getY() {
            return y;
        }

        void move(Point _Point) {
            x += _Point.getX();
            y += _Point.getY();
        }

};

float distancee(Point point1, Point point2) {
    //Nie mo¿e byæ zwyk³e distance jeœli u¿ywamy kompilator MWGCC
    return sqrt(pow(point1.getX()-point2.getX(),2) + pow(point1.getY()-point2.getY(),2));
	return 2.0;
}

int main() {
    Point t = Point(0,0);
    Point t2 = Point(3,4);

    cout<<distancee(t,t2)<<endl;
    return 0;
}
