#include <iostream>
#include <cmath>
#include <vector>

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
    Point *operator[] (int x) {
        if(x >= size) {
            string s = "Out of range";
            throw out_of_range(s);
        }
        return tab[x];
    }
};

ostream& operator<< (ostream &out, Points const& p) {
    for(int i = 0; i<p.size;i++) {

        out<<p.tab[i]->x<<" "<<p.tab[i]->y<<endl;
    }
    return out;
}

class Exc {
public:
    vector<Point*> tab;
    Exc(vector<Point*> tab) {
        this->tab = tab;
    }
};


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

        vector<float> odleglosci;

        Point *result = new Point;

        float x = sqrt(pow(s1 - p.tab[0]->x,2) + pow(s2 - p.tab[0]->y,2));
        odleglosci.push_back(x);
        result = p.tab[0];
        for(int i = 1;i<p.size;i++) {
            float pp = sqrt(pow(s1 - p.tab[i]->x,2) + pow(s2 - p.tab[i]->y,2));
            if(x > pp) {
                x = pp;
                result = p.tab[i];
            }

            odleglosci.push_back(pp);
        }


        for(int i = 0; i< odleglosci.size()-2;i++) {
            for(int j = i+1;j<odleglosci.size();j++) {
                if(odleglosci.at(i) == odleglosci.at(j)) {
                    vector<Point*> wyn;
                    wyn.push_back(p.tab[i]);
                    wyn.push_back(p.tab[j]);
                    throw Exc(wyn);
                }
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

    try {
        PointsOperations pp;
        cout<<pp.closestToTheCenter(ptab)->x<<endl;
    }
    catch(Exc e) {
        cout<<"Wyjatek!"<<endl;
        for(int i = 0;i<e.tab.size();i++) {
            cout<<e.tab.at(i)->x<<" "<<e.tab.at(i)->y<<endl;
        }
    }
    cout<<endl;

    return 0;
}

