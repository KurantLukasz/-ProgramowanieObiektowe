#include <iostream>
#include <string>

using namespace std;

bool z2(string s1, string s2) {
    string::iterator i2 = s2.begin();
    for(string::iterator i = s1.begin();i != s1.end();i++) {
        if(i2 == s2.end()) {
            return true;
        }
        else if(*i == *i2) i2++;
        else i2 = s2.begin();
    }
    return false;
}

int main() {
    cout<<"Podaj string 1"<<endl;
    string s1,s2;
    getline(cin,s1);
    cout<<"Podaj string 2"<<endl;
    getline(cin,s2);

    if(z2(s1,s2) == true)
        cout<<"n1 zawiera sie w n2"<<endl;
    else
        cout<<"n1 nie zawiera sie w n2"<<endl;

    return 0;
}
