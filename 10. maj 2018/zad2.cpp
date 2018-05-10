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
