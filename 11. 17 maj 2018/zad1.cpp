#include <iostream>

using namespace std;

template<class Typ>
Typ zad1 (Typ *a, Typ *b) {
    Typ mini = *a;
    for(a;a<=b;a++) {
        if(mini > *a)
            mini = *a;
    }
    return mini;
}

int main()
{
    int tab[4] = {3,4,2,1};

    cout<<zad1(tab, tab+3)<<endl;

    return 0;
}
