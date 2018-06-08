#include <iostream>
#include <cmath>

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

class PointsOperations {
public:
    friend class Points;
    static Point *closestToTheCenter(Points &p) {
        float s1 = 0, s2 = 0;
        for(int i = 0;i<p.size;i++) {
            s1 +=p.tab[i]->x;
            s2 +=p.tab[i]->y;
        }
        s1/=p.size;
        s2/=p.size;

        Point *result = new Point;
        float x = sqrt(pow(s1 - p.tab[0]->x,2) + pow(s2 - p.tab[0]->y,2));
        result = p.tab[0];
        for(int i = 1;i<p.size;i++) {
            if(x > sqrt(pow(s1 - p.tab[i]->x,2) + pow(s2 - p.tab[i]->y,2))) {
                x = sqrt(pow(s1 - p.tab[i]->x,2) + pow(s2 - p.tab[i]->y,2));
                result = p.tab[i];
            }
        }
        return result;
    }
};

int main() {

   cout<<endl;
    Point p,p2,p3;
    cin>>p;
    cin>>p2;
    cin>>p3;
    Point **tab = new Point * [3];
    tab[0] = &p;
    tab[1] = &p2;
    tab[2] = &p3;
    Points ptab;
    ptab.size = 3;
    ptab.tab = tab;
    PointsOperations po;
    cout<<po.closestToTheCenter(ptab)->x<<" "<<po.closestToTheCenter(ptab)->y<<endl;

    cout<<endl;

    return 0;
}
