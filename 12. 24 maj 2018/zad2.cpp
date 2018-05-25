#include <iostream>

using namespace std;

class Element {
public:
    string Data;
    Element *NextElement = NULL;
};

class MyList {
public:
    Element *FirstElement = NULL;
    void Add(string data) {
        Element *el = new Element;
        el->Data = data;
        if(FirstElement == NULL) {
            FirstElement = el;
        }
        else {
            Element *tmp = FirstElement;
            while(!(tmp->NextElement == NULL)) {
                tmp = tmp->NextElement;
            }
            tmp->NextElement = el;
        }
    }
};

int main() {
    MyList list = MyList();
    list.Add("cos1");
    list.Add("cos2");
    cout<<list.FirstElement->Data<<endl;
    cout<<list.FirstElement->NextElement->Data<<endl;


    return 0;
}
