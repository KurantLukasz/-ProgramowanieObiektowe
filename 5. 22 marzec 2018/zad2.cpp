#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

bool ustawionySrand = false;

class Villager {
    private:
        string imie;
        unsigned int wiek, max_wiek;
        bool plec;
        string imiona_meskie[4] = {"Mietek", "Wiesiek", "Pioter", "Janusz"};
        string imiona_zenskie[4] = {"Monika", "Ala", "Magda", "Aneta"};
    public:
        Villager() {
            if(ustawionySrand == false) {
                srand(time(0));
                ustawionySrand = true;
            }
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
                  delete(this);
        }
        int getWiek() {
            return wiek;
        }
        bool getPlec() {
            return plec;
        }
        int getMaxWiek() {
            return max_wiek;
        }
        string getImie() {
            return imie;
        }
};
class Household {
    private:
        Villager **domownicy;
        int max_domownikow, liczba_elementow;
    public:
        Household(int liczba, int max) {

           liczba_elementow = liczba;
           max_domownikow = max;

           domownicy = new Villager * [this->max_domownikow];
           for(int i = 0;i<this->liczba_elementow;i++) {
                domownicy[i] = new Villager();
           }

        }
        void nastepnyRok() {
            for(int i = 0;i<liczba_elementow;i++) {
                domownicy[i]->zwieksz_wiek();
            }
            bool czy_jest_chlop = false;
            bool czy_jest_chlopka = false;
            bool czy_jest_dziecko = false;
            for(int i = 0;i<liczba_elementow;i++) {
                if(domownicy[i]->getWiek() >= 18 && domownicy[i]->getWiek() <= 40) {
                    if(domownicy[i]->getPlec() == true)
                        czy_jest_chlop = true;
                    else
                        czy_jest_chlopka = true;
                }
                if(domownicy[i]->getWiek() <= 5)
                    czy_jest_dziecko = true;
            }
            if(czy_jest_chlop == true && czy_jest_chlopka == true && czy_jest_dziecko == false) {
                domownicy[liczba_elementow] = new Villager();
                liczba_elementow++;
            }
        }
        void wypiszDomownikow() {
            for(int i = 0;i<liczba_elementow;i++) {
                cout<<"Imie: "<<domownicy[i]->getImie()<<", Wiek: "<<domownicy[i]->getWiek()<<", MaxWiek: "<<
                domownicy[i]->getMaxWiek()<<", plec: "<<domownicy[i]->getPlec()<<endl;
            }
        }
};

int main()
{

    Household domek = Household(5, 10);
    cout<<endl;
    domek.wypiszDomownikow();
    cout<<endl<<"Mija 18 lat"<<endl;
    for(int i = 0;i<19;i++)
        domek.nastepnyRok();
    cout<<endl;
    domek.wypiszDomownikow();

    return 0;
}
