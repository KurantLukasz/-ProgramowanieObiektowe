#include <iostream>

using namespace std;

struct vec3 {
    float x,y,z;

    vec3(float x1, float y1, float z1) {
        x = x1;
        y = y1;
        z = z1;
    }

    vec3 operator+ (vec3 &v)
    {
        vec3 v3 = vec3(x+v.x,y+v.y,z+v.z);
        return v3;
    }
    vec3 operator- (vec3 &v)
    {
        vec3 v3 = vec3(x-v.x,y-v.y,z-v.z);
        return v3;
    }
    void operator+= (vec3 &v) {
        x += v.x;
        y += v.y;
        z += v.z;
    }
    void operator-= (vec3 &v) {
        x -= v.x;
        y -= v.y;
        z -= v.z;
    }

    vec3 operator * (vec3 &v) {
        vec3 v3 = vec3((y*v.z)-(z*v.y),(z*v.x)-(x*v.z),(x*v.y)-(y*v.x));
        return v3;
    }
    void operator *= (vec3 &v) {
        vec3 v3 = vec3((y*v.z)-(z*v.y),(z*v.x)-(x*v.z),(x*v.y)-(y*v.x));
        x = v3.x;
        y = v3.y;
        z = v3.z;
    }
    vec3 operator * (float l) {
        vec3 v3 = vec3(l*x,l*y,l*z);
        return v3;
    }
    void operator *= (float l) {
        x *= l;
        y *= l;
        z *= l;
    }
};

int main()
{
    vec3 v1(2,2,2);
    vec3 v2(2,2,2);
    vec3 v3  = v1+v2;
    cout<<v3.x<<" "<<v3.y<<" "<<v3.z<<endl;
    v3 = v1-v2;
    cout<<v3.x<<" "<<v3.y<<" "<<v3.z<<endl;
    v1 += v2;
    cout<<v1.x<<" "<<v1.y<<" "<<v1.z<<endl;
    v1 -= v2;
    cout<<v1.x<<" "<<v1.y<<" "<<v1.z<<endl;
    v3 = v1 * 3;
    cout<<v3.x<<" "<<v3.y<<" "<<v3.z<<endl;
    v1 *= 3;
    cout<<v1.x<<" "<<v1.y<<" "<<v1.z<<endl;

    v1 = vec3(6,6,6);
    v2 = vec3(2,3,2);

    v3 = v1 * v2;
    cout<<v3.x<<" "<<v3.y<<" "<<v3.z<<endl;
    v1 *= v2;
    cout<<v1.x<<" "<<v1.y<<" "<<v1.z<<endl;
    return 0;
}
