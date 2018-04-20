#include <iostream>
#include <cmath>

#define PI 3.1415

using namespace std;

namespace poly {
    class RegularPolyhedron{
        private:
            double dlbokupodstawy;
            double polepodstawy;
            double wysokoscbryly;
            int ilebokow;
        public:
            RegularPolyhedron(double dlbokupodstawy, double ilebokow, double wysokoscbryly) {
                this->dlbokupodstawy = dlbokupodstawy;
                this->ilebokow = ilebokow;
                this->wysokoscbryly = wysokoscbryly;
                this->polepodstawy = (ilebokow / 4) * (1 / tan(PI/ilebokow)) * pow(dlbokupodstawy,2);
            }

        protected:
            double getPolePodstawy() {
                return polepodstawy;
            }
            double getWysokoscBryly() {
                return wysokoscbryly;
            }
        public:
            virtual double volume() = 0;
    };

    class RegularPrism : public RegularPolyhedron {
        public:
            RegularPrism() : RegularPolyhedron(2,4,3) {
            }
            double volume() {

                return getPolePodstawy() * getWysokoscBryly();
            }
    };

    class RegularPyramid : public RegularPolyhedron {
        public:
            double volume() {
                return (1 / 3) * getPolePodstawy() * getWysokoscBryly();
            }
    };
}




int main()
{
    poly::RegularPrism pr =  poly::RegularPrism();
    cout<<pr.volume()<<endl;
    return 0;
}
