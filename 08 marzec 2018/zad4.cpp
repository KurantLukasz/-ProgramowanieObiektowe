#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string napis = "ala";

    fstream plik ("test.txt",ios::in);
    string bufor;
    int ile = 0;
    int poz = 0;
    while(!plik.eof()) {
        getline(plik,bufor);
        while(true) {
            poz=bufor.find(napis,poz);
            if(poz==string::npos)
                break;
            else {
                poz+=napis.size();
                ile++;
            }
        }
        poz = 0;
    }

    cout<<ile<<endl;

    plik.close();
    return 0;
}
