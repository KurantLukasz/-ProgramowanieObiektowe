#include <iostream>
#include <point.h>

using namespace std;


class Polygon {
    private:
        pt::Point **tab;
        int rozmiar;
    public:
        Polygon(int rozmiar) {
            tab = new pt::Point * [rozmiar];
        }
        pt::Point **GetTab() {
            return tab;
        }
    static Polygon *triangle(pt::Point p1, pt::Point p2, pt::Point p3) {
        Polygon *obj = new Polygon(3);
        obj->GetTab()[0] = &p1;
        obj->GetTab()[1] = &p2;
        obj->GetTab()[2] = &p3;
        return obj;
    }
};

int main()
{
    pt::Point x = pt::Point(4,3);
    Polygon p = Polygon(3);
    Polygon *t = p.triangle(x,x,x);
    cout<<t->GetTab()[0]->getx()<<endl;
    return 0;
}
