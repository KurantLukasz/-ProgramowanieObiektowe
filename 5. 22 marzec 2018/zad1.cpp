#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;


class Villager {
    private:
        string imie;
        unsigned int wiek, max_wiek;
        bool plec;
        string imiona_meskie[4] = {"Mietek", "Wiesiek", "Pioter", "Janusz"};
        string imiona_zenskie[4] = {"Monika", "Ala", "Magda", "Aneta"};
    public:
        Villager() {
            srand(time(0));
            this->plec = rand()%2;
            this->max_wiek = rand()%100;
            this->wiek = 0;
            if(this->plec == true)
                this->imie = imiona_meskie[rand()%4];
            else
                this->imie = imiona_zenskie[rand()%4];

            cout<<"Urodzil sie chlop o imieniu: "<<this->imie<<", wieku: "<<this->wiek<<", maksymalnym wieku: "<<this->max_wiek<<" i plci: "<<this->plec<<endl;
        }
        Villager(string imie, unsigned int wiek, unsigned int max_wiek, bool plec) {
            this->imie = imie;
            this->wiek = wiek;
            this->max_wiek = max_wiek;
            this->plec = plec;
            cout<<"Przybyl chlop o imieniu: "<<this->imie<<", wieku: "<<this->wiek<<", maksymalnym wieku: "<<this->max_wiek<<" i plci: "<<this->plec<<endl;
        }
        ~Villager() {
            cout<<"Umarl/a "<<imie<<" w wieku "<<wiek<<" lat."<<endl;
        }

        void zwieksz_wiek() {
            wiek++;
            if(wiek == max_wiek)
                  this->~Villager();
        }
};


int main()
{
    Villager vill = Villager();
    Villager vill2 = Villager("Jan",38,40,true);
    vill2.zwieksz_wiek();
    vill2.zwieksz_wiek();
    return 0;
}
