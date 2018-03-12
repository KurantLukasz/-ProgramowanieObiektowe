#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cout<<"Podaj string"<<endl;
    string s;
    cin>>s;

    transform(s.begin(),s.end(),s.begin(),::tolower);

    char c1 = s[0];
    char c2 = s[0];


    for(int i = 1;i<(unsigned int)s.size();i++) {
        if(s[i] < c1) c1 = s[i];
        if(s[i] > c2) c2 = s[i];
    }

    cout<<"Najwczesniejsza: "<<c1<<" ,najpozniejsza: "<<c2<<endl;

    return 0;
}
