#include <iostream>

using namespace std;



class Triangle {
public:
    float x,y,z;
    float oblicz(shared_ptr<Triangle> &ptr) {
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

    shared_ptr<Triangle> ptr1 (new Triangle(2,3,4));
    shared_ptr<Triangle> ptr2 (ptr1);
    shared_ptr<Triangle> ptr3 (ptr2);

    cout<<ptr3->x<<endl;
    return 0;
}
