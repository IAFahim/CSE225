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
    data = nullptr;
    size = 0;
}

template<class T>
dynarr<T>::~dynarr() {
    delete[] data;
}

