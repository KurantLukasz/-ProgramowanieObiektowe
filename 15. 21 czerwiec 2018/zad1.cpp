#include <iostream>

using namespace std;

template<class T>
class SmartPointer{
public:
    T *id;
    SmartPointer(T *cos) {
        id = cos;
        cout<<"Nowy obiekt o id "<<endl;
    }
    ~SmartPointer() {
        cout<<"Destruktor obiektu"<<endl;
    }
    T* operator -> () {
        return id;
    }
    T& operator & () {
        return *id;
    }
};

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

    SmartPointer<Triangle> sp (new Triangle(3,2,2));

    cout<<sp->x<<endl;
    return 0;
}
