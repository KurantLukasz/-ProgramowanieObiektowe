#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
    float x,y;
};

void zad4(vector<Point> &tab, Point p3) {
    sort(tab.begin(),tab.end(),[p3](Point p1, Point p2)->bool { return sqrt(pow(p1.x-p3.y,2)+pow(p1.y-p3.y,2)) > sqrt(pow(p2.x-p3.y,2)+pow(p2.y-p3.y,2));});
}

int main() {
    vector<Point> tab;
    Point p1, p2, p3, p4;
    p1.x = 0; p1.y = 0;
    p2.x = 2; p2.y = 2;
    p3.x = 1; p3.y = 1;
    p4.x = 4; p4.y = 4;
    tab.push_back(p2);
    tab.push_back(p3);
    tab.push_back(p4);
    zad4(tab,p1);
    for(int i = 0;i<tab.size();i++) {
        cout<<tab.at(i).x<<" "<<tab.at(i).y<<endl;
    }
    return 0;
}

