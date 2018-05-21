#include <iostream>

using namespace std;

template <typename T, int rozmiar>
class Klasa {
    private:
        T tab[rozmiar];
    public:
        Klasa() {
            tab[0] = 3;//pomocnicze nie powinno byÄ‡ w zadaniu.
            tab[1] = 4;//tylko do sprawdzenia dziaÅ‚ania
            tab[2] = 1;
        }
        T operator [] (int x) {
            return tab[x];
        }
        template<typename T2>
        void dodaj(T2 x) {
            for(int i=0;i<rozmiar;i++)
                tab[i] += x;
        }

};

int main()
{
    Klasa<int,3> klasa = Klasa<int,3>();
    cout<<klasa[0]<<endl;
    cout<<klasa[1]<<endl;
    cout<<klasa[2]<<endl;

    klasa.dodaj<int>(1);

    cout<<klasa[0]<<endl;
    cout<<klasa[1]<<endl;
    cout<<klasa[2]<<endl;

    return 0;
}
