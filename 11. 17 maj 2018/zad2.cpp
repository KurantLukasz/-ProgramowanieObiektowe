#include <iostream>
#include <algorithm>

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

bool pomsort(string x, string y) {
    transform(x.begin(),x.end(),x.begin(),::tolower);
    transform(y.begin(),y.end(),y.begin(),::tolower);
    if(x < y)  return true;
    return false;
}

template<> string zad1 (string *a, string *b) {
    sort(a,b, pomsort);
    return *a;
}

int main()
{
    string tab2[4] = {"bb","AA","ac", "an"};

    cout<<zad1(tab2,tab2+3)<<endl;
    return 0;
}

