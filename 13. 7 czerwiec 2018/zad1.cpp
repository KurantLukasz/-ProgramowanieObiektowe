#include <iostream>

using namespace std;

struct Point {
    float x, y;
    friend istream& operator>> (istream&, Point&);
};

istream& operator>> (istream &in, Point &p) {
    in>>p.x>>p.y;
    return in;
}

int main() {
    Point p;
    cin>>p;
    cout<<p.x<<" "<<p.y<<endl;
    return 0;
}
