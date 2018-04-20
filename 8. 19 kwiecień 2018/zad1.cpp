#include <iostream>


using namespace std;

class Person {
    protected:
        string name;
};

class Teacher : public Person {
    private:
        string title;
    public:
        string indent() {
            return "Name: "+name+", title: "+title;
        }
};

class Student : public Person {
    public:
        int semester;
        string indent() {
            return "Name: "+name+", semester: "+to_string(semester); //only C++ 11
        }
};


int main()
{
    return 0;
}
