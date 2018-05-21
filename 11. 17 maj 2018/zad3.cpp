#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<typename Typ>
Typ zad3 (vector<Typ> &tab) {
    vector<Typ> tab2 = tab;
    sort(tab2.begin(),tab2.end());
    return tab2.at(0);
}

int main()
{
    vector<int> tab;
    tab.push_back(2);
    tab.push_back(1);
    tab.push_back(3);

    cout<<zad3(tab)<<endl;

    vector<double> tab2;
    tab2.push_back(2.3);
    tab2.push_back(1.4);
    tab2.push_back(1.3);

    cout<<zad3(tab2)<<endl;

    return 0;
}
