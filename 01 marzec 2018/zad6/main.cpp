#include <iostream>
#include <cmath>
#include "Point.h"
#include "Triangle.h"

using namespace std;


int main() {
    Point t = Point(0,0);
    Point t2 = Point(3,4);
    Point t3 = Point(3,0);
    Triangle tr = Triangle(t,t2,t3);
    cout<<tr.area()<<" "<<tr.perimeter()<<endl;
    return 0;
}

