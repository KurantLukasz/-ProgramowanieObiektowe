#include <iostream>

using namespace std;

template <typename T>
class Array {
    unsigned int m_size;
    T *arr;
public:
    Array(int size);
    ~Array();
    int size();
    T& operator[](int index);
    T* begin() {
        return arr;
    }
    T* end() {
        return arr+m_size-1;
    }
    class iterator {
        T *element;
        int index;
        public:
        Iterator(T& element) {
            this->*element = element;
            index = 0;
        }
        T& operator*() {
            return *element;
        }
        T& operator ++ () {
                element++;
        }
        T& operator=(T *element) {
            this->element = element;
        }
    };
};

template <typename T>
Array<T>::Array(int size) {
    this->m_size=size;
    this->arr=new T[size];
    for(int i = 0;i<m_size;i++) {
        arr[i] = i;
    }
}

template <typename T>
Array<T>::~Array() {
    delete [] arr;
}

template <typename T>
int Array<T>::size() {
    return m_size;
}

template <typename T>
T& Array<T>::operator[](int index) {
    return arr[index];
}



int main() {
    Array<int> tab = Array<int>(4);

    Array<int>::iterator it;
    it = tab.begin();
    ++it;
    ++it;
    cout<<*it<<endl;
    return 0;
}
