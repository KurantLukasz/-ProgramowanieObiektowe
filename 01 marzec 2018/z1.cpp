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
};

int main() {
    Point t = Point();

    t.setX(3.4);
    cout<<t.getX()<<endl;

    t.setY(2.2);
    cout<<t.getY()<<endl;

    return 0;
}
