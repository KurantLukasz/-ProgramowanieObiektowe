#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

class WordBag {
    private:
    vector<unique_ptr<string>> vc;
    public:
    void add(unique_ptr<string> cos) {
        vc.push_back(move(cos));
    }
    unique_ptr<string> &take() {
        return vc.at(rand()%vc.size());
    }
};

int main()
{
    srand(time(0));
    unique_ptr<string> ptr (new string("cos"));
    unique_ptr<string> ptr2 (new string("cosik"));
    unique_ptr<string> ptr3 (new string("cos2"));


    WordBag wb = WordBag();
    wb.add(move(ptr));
    wb.add(move(ptr2));
    wb.add(move(ptr3));
    cout<<*wb.take()<<endl;



    return 0;
}
