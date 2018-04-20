#include <iostream>
#include <cmath>

using namespace std;

class Polygon {
public:
    virtual circ() = 0;
};

class Triangle {
private:
    double x, y;
public:
    Triangle(double x, double y){
        this->x = x;
        this->y = y;
    }
    double circ() {
        double c = sqrt(x*x + y*y);
        return c + x + y;
    }
};

class Rectangle {
private:
    double x, y;
public:
    Rectangle(double x, double y){
        this->x = x;
        this->y = y;
    }
    double circ() {
        return (2*x) + (2*y);
    }
};


int main() {
    Rectangle rec = Rectangle(3,4);
    Triangle tri = Triangle(3,4);
    cout<<rec.circ()<<endl;
    cout<<tri.circ()<<endl;
    return 0;
}
