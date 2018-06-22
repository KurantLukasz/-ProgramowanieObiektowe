#include <iostream>

using namespace std;



class Triangle {
public:
    float x,y,z;
    float oblicz(unique_ptr<Triangle> &ptr) {
        return ptr->x + ptr->y + ptr->z;
    }
    Triangle(float x1, float y1, float z1) {
        cout<<"Nowy obiekt triangle"<<endl;
        x = x1;
        y = y1;
        z = z1;
    }
};


int main()
{

    unique_ptr<Triangle> ptr (new Triangle(2,3,4));

    cout<<ptr->x<<endl;
    return 0;
}
