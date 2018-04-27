#include <iostream>
#include <list>

using namespace std;

void zad3(list<string>::iterator it1, list<string>::iterator it2) {
    while(it1 != it2) {
        cout<<*it1<<endl;
        it1++;
    }
}


int main()
{

    list<string> list;
    for(int i = 0;i<10;i++) {
        list.push_back("str"+to_string(i));
    }
    std::list<string>::iterator it1 = list.begin();
    std::list<string>::iterator it2 = list.end();
    it1++;
    it2--;
    it2--;
    zad3(it1,it2);
    return 0;
}
