#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

float distancee(Point point1, Point point2) {
    //Nie moze byc zwykle distance jezli uzywamy kompilatora MWGCC
    return sqrt(pow(point1.getX()-point2.getX(),2) + pow(point1.getY()-point2.getY(),2));
}

int main() {
    Point t = Point(0,0);
    Point t2 = Point(3,4);

    cout<<distancee(t,t2)<<endl;
    return 0;
}

