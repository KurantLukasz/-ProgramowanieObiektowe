#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person{
    private:
    string nazwa;
    int wiek;
    vector<Person>* dzieci;

    public:
    Person(string nazwa1, int wiek1, vector<Person>* dzieci1) {
        nazwa = nazwa1;
        wiek = wiek1;
        dzieci = dzieci1;
    }

    void operator < (int d) {
        sort(dzieci->begin(),dzieci->end(),sortWiek);
    }
    string getNazwa() {
        return nazwa;
    }
    int getWiek() {
        return wiek;
    }
    static bool sortWiek(Person &p1, Person &p2) {
        if(p1.getWiek() == p2.getWiek())
            return (p1.getNazwa() < p2.getNazwa());
        else
            return (p1.getWiek() < p2.getWiek());
    }

    Person &getDziecko(int id) {
        return dzieci->at(id);
    }

    void operator <<= (Person p1) {
        bool pom = false;
        for(int i = 0;i<(int)dzieci->size();i++) {
            if(getDziecko(i).getNazwa() == p1.getNazwa() &&
            getDziecko(i).getWiek() == p1.getWiek())
                pom = true;
        }
        if(pom == false) {
            dzieci->push_back(p1);
        }
    }
    Person &operator [] (int id) {
        return dzieci->at(id);
    }
};



int main()
{
    Person p1 = Person("Ola",12,NULL);
    Person p2 = Person("Jacek", 6, NULL);
    Person p3 = Person("Ada", 6, NULL);
    vector<Person> p;
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    Person p4 = Person("Matka",30,&p);
    p4<4;
    cout<<p4.getDziecko(0).getNazwa()<<endl;
    cout<<p4.getDziecko(1).getNazwa()<<endl;
    cout<<p4.getDziecko(2).getNazwa()<<endl;
    Person p5 = Person("Arek", 6,NULL);
    p4<<=p1; //Nie zadziaÅ‚a bo takie same
    p4<<=p5;
    p4<4;
    cout<<p4.getDziecko(0).getNazwa()<<endl;
    cout<<p4.getDziecko(1).getNazwa()<<endl;
    cout<<p4.getDziecko(2).getNazwa()<<endl;
    cout<<p4.getDziecko(3).getNazwa()<<endl;

    cout<<p4[1].getNazwa()<<endl;

    return 0;
}
