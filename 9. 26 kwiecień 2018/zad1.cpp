#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Point {
    public:
        float x,y;
};

bool comparex ( Point p1, Point p2) {
    return ( p1.x < p2.x);
}
bool comparey ( Point p1, Point p2) {
    return ( p1.y < p2.y);
}

int main()
{
    Point p = Point();
    vector<Point> tab;
    for(int i = 9;i>=0;i--) {
        p.x = i;
        p.y = i+1;
        tab.push_back(p);
    }
    sort(tab.begin(), tab.end(), comparex);
    sort(tab.begin(), tab.end(), comparey);

    for(int i = 0;i<10;i++) {
        cout << tab[i].x <<endl;
    }

    return 0;
}
