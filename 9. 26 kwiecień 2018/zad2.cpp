#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Point {
    public:
        float x,y;
        Point(float x, float y) {
            this->x = x;
            this->y = y;
        }
        Point() {}
};

vector<Point> zad2(const vector<Point> &tab, Point p1, Point p2) {
    vector<Point> new_tab;
    for(int i = 0;i<(int)tab.size();i++) {
        if(tab[i].x >= p1.x && tab[i].y <= p1.y && tab[i].x <= p2.x && tab[i].y >= p2.y)
            new_tab.push_back(tab[i]);
    }
    return new_tab;
}

int main()
{
    Point p = Point(1,3);
    Point p2 = Point(3,1);
    Point p3 = Point();
    vector<Point> tab;
    for(int i = 9;i>=0;i--) {
        p3.x = i;
        p3.y = i+1;
        tab.push_back(p3);
    }

    vector<Point> new_tab = zad2(tab, p,p2);

    for(int i = 0;i<(int)new_tab.size();i++) {
        cout << new_tab[i].x  << new_tab[i].y<<endl;
    }

    return 0;
}
