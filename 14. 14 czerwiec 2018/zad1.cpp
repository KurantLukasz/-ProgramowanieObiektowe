#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void zad1(vector<int> &tab, int x, int y) {
    replace_if(tab.begin(),tab.end(),[x, y](int z)->bool {return !(z>=x && z<=y);},0);
}

int main() {
    vector<int> tab;
    tab.push_back(2);
    tab.push_back(3);
    tab.push_back(4);
    tab.push_back(5);
    tab.push_back(6);
    zad1(tab,3,4);
    for(int i = 0;i<tab.size();i++) {
        cout<<tab.at(i)<<endl;
    }
    return 0;
}
