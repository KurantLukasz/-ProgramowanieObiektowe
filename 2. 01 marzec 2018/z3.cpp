#include <iostream>

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

int main() {
    Point t = Point(3.2,3.3);
    Point t2 = Point(2.0,2.0);


    t.move(t2);
    cout<<t.getX()<<"  "<<t.getY()<<endl;

    return 0;
}
