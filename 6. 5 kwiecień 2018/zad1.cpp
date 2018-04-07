#include <iostream>

using namespace std;

class Polygon {
    public:
        struct Point {
            float x,y;
        };
    protected:
        Point *tab;
        int ilePunktow;
        int ileKomorek;
    public:
        Polygon() {
            tab = new Point[4];
            ilePunktow = 0;
            ileKomorek = 4;
        }
        Polygon(int x) {
            if(x%4 != 0) x+=4-(x%4);
            tab = new Point[x];
            ilePunktow = 0;
            ileKomorek = x;
        }
        Polygon(Polygon &old) {
            ilePunktow = old.ilePunktow;
            ileKomorek = old.ileKomorek;
            tab = new Point[ileKomorek];
            for(int i = 0;i<ilePunktow;i++)
                tab[i] = old.tab[i];
        }
        ~Polygon() {
            //for(int i = 0;i<ilePunktow;i++)
            //    delete tab[i];
            delete tab;
        }
        void show()  {
            for(int i = 0;i<ilePunktow;i++)
                cout<<tab[i].x<<"  "<<tab[i].y<<endl;
        }

        void AddPoint(Point x) {
            if(ilePunktow == ileKomorek) {
                ileKomorek+=4;
                Point *tmptab = new Point[ileKomorek];
                for(int i = 0;i<ilePunktow;i++)
                    tmptab[i] = tab[i];
                delete [] tab;
                tab = tmptab;
            }
            tab[ilePunktow] = x;
            ilePunktow++;
        }

        Point &GetPoint(int x) {
            return tab[x];
        }


};

int main()
{
    Polygon pol;
    Polygon pol2(pol);


    Polygon::Point p = Polygon::Point();
    p.x = 3;
    p.y = 5;


    pol.AddPoint(p);
    pol.AddPoint(p);
    pol.AddPoint(p);
    pol.AddPoint(p);

    pol.show();
    cout<<""<<endl;
    pol.AddPoint(p);
    pol.show();

    Polygon::Point p2 = Polygon::Point();
    p2 = pol.GetPoint(2);
    cout<<endl<<p2.x<<"  "<<p2.y<<endl;



    return 0;
}
