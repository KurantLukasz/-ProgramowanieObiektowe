#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    float x,y;
};

void zad3(vector<Point> &tab) {
    sort(tab.begin(),tab.end(),[](Point p1, Point p2)->bool { return p1.x > p2.x;});
}

int main() {
    vector<Point> tab;
    Point p1, p2, p3;
    p1.x = 4;
    p2.x = 1;
    p3.x = 0;
    tab.push_back(p1);
    tab.push_back(p2);
    tab.push_back(p3);
    zad3(tab);
    for(int i = 0;i<tab.size();i++) {
        cout<<tab.at(i).x<<endl;
    }
    return 0;
}

