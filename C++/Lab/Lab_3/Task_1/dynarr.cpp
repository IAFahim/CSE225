#include "dynarr.h"

template<class T>
dynarr<T>::dynarr(int size) {
    data = new T[size];
}

template<class T>
dynarr<T>::~dynarr() {
    delete[] data;
}

template<class T>
void dynarr<T>::setValue(int index, T value) {
    data[index] = value;
}

template<class T>
T dynarr<T>::getValue(int index) {
    return data[index];
}