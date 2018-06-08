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


class Points {
public:
    Point **tab;
    int size;
    friend ostream& operator<< (ostream&, Points const&);
};

ostream& operator<< (ostream &out, Points const& p) {
    for(int i = 0; i<p.size;i++) {

        out<<p.tab[i]->x<<" "<<p.tab[i]->y<<endl;
    }
    return out;
}


int main() {
    cout<<endl;
    Point p;
    cin>>p;
    Point **tab = new Point * [2];
    tab[0] = &p;
    tab[1] = &p;

    Points ptab;
    ptab.size = 2;
    ptab.tab = tab;
    cout<<ptab;
    cout<<endl;
    return 0;
}
