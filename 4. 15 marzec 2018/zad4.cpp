#include <iostream>

using namespace std;

class User {
    protected:
        string login, password;
    public:
        User(string s1, string s2) {
            this->login = s1;
            this->password = s2;
        }
        bool authorize(string s1, string s2) {
            if(this->login == s1 && this->password == s2)
                return true;
            return false;
        }
};

class Student : public User {
    public:
        int semestr;
    public:
        Student (int s) : User("","")
        {
            this->semestr = s;
        }
};

class Subject {
    private:
        string nazwa;
        int max_ilosc_studentow;
        Student *tab[100];
        int ilosc_studentow;
    public:
        Subject(string nazwa, int max, Student s1, Student s2) {
            this->nazwa = nazwa;
            this->max_ilosc_studentow = max;
            tab[0] = &s1;
            tab[1] = &s2;
            ilosc_studentow = 2;
        }

        bool addStudent(Student s) {
            if(ilosc_studentow <= max_ilosc_studentow) {
                tab[ilosc_studentow] = &s;
                ilosc_studentow++;
                return true;
            }
            return false;
        }

        Student *zad4(int id, bool & log) {
            if(ilosc_studentow >= id) {
                log = true;
                return tab[id];
            }
            log = false;
            return tab[0];
        }
};



int main()
{
    Student s = Student(3);

    Subject sub = Subject("matematyka",100,s,s);

    bool l;
    cout<<sub.zad4(1,l)->semestr<<endl;
    cout<<l<<endl;

    return 0;
}


