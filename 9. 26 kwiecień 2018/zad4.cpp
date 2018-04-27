#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> zad4(vector<int> tab1, vector<int> tab2) {
    vector<int> new_tab;
    for(int i = 0;i<(int)tab1.size();i++) {
        new_tab.push_back(tab1[i]);
    }
    for(int i = 0;i<(int)tab2.size();i++) {
        new_tab.push_back(tab2[i]);
    }
    sort(new_tab.begin(),new_tab.end());
    new_tab.erase(unique(new_tab.begin(),new_tab.end()), new_tab.end());

    return new_tab;
}


int main()
{

    vector<int> tab1;
    vector<int> tab2;

    for(int i = 0;i<10;i++) {
        tab1.push_back(i);
        tab2.push_back(i);
    }
    vector<int> tab3 = zad4(tab1,tab2);
    for(int i = 0;i<(int)tab3.size();i++) {
        cout<<tab3[i]<<endl;
    }
    return 0;
}
