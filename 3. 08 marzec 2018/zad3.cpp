#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string s = "ala ma kota kot ma ale ala ma kota kot ma ale ala ala ma kota";

    fstream plik ("test.txt",ios::out);


    int ostatni=0;
    int i=0,j=0;

    while(j != string::npos) {
        while(j != string::npos) {
            if(j-ostatni < 20) i=j;
            else break;
            j=s.find(" ",j+1);
        }
        plik<<s.substr(ostatni,i-ostatni)<<"\n";
        ostatni=i+1;
    }

    plik.close();
    return 0;
}
