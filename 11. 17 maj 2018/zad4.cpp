#include <iostream>

using namespace std;

template <typename T, int rozmiar>
class Klasa {
    private:
        T tab[rozmiar];
    public:
        Klasa() {
            tab[0] = 3;//pomocnicze nie powinno byæ w zadaniu.
            tab[1] = 4;//tylko do sprawdzenia dzia³ania
            tab[2] = 1;
        }
        T operator [] (int x) {
            return tab[x];
        }

};

int main()
{
    Klasa<int,3> klasa = Klasa<int,3>();
    cout<<klasa[0]<<endl;
    cout<<klasa[1]<<endl;
    cout<<klasa[2]<<endl;
    return 0;
}
