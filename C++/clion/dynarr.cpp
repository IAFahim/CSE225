#include "dynarr.h"
#include <iostream>
#include <dynarr.h>

using namespace std;

template<class T>
dynarr<T>::dynarr() {
    data = nullptr;
    size = 0;
}

template<class T>
dynarr<T>::dynarr(int n) {
    size=n;
    data=new T[size];
}

template<class T>
dynarr<T>::~dynarr() {
    delete[] data;
}

template<class T>
void dynarr<T>::setData(T x, int index) {
    data[index]=x;
}

template<class T>
T dynarr<T>::getData(int index) {
    return data[index];
}


