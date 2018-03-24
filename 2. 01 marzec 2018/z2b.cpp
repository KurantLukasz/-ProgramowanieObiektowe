#include <iostream>

using namespace std;


class Point {
    private:
        float x, y;
    public:
        void setX(float x) {
            this->x = x;
        }
        float getX() {
            return x;
        }
        void setY(float y) {
            this->y = y;
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
    Point t = Point();
    Point t2 = Point();
    t.setX(3.4);
    t.setY(2.2);
    t2.setX(2);
    t2.setY(2);

    t.move(t2);
    cout<<t.getX()<<"  "<<t.getY()<<endl;

    return 0;
}
