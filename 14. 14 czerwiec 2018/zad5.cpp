#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;



int main() {
    vector<int> tab;
    tab.push_back(5);
    tab.push_back(7);
    tab.push_back(3);
    int maxi = *tab.begin();
    for_each(tab.begin()+1, tab.end(), [&maxi](int x) { if(maxi < x) maxi = x;});

    cout<<maxi<<endl;
    return 0;
}


