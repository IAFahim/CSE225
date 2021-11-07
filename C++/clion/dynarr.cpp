#include "dynarr.h"
#include <iostream>
#include <dynarr.h>

using namespace std;

template<class T>
dynarr<T>::dynarr() {
    DATA = nullptr;
    SIZE = 0;
}

template<class T>
void dynarr<T>::inti(int size) {
    SIZE=size;
    DATA=new T[size];
}

template<class T>
dynarr<T>::dynarr(int size) {
    inti(size);
}

template<class T>
void dynarr<T>::setData(T x, int index) {
    DATA[index]=x;
}

template<class T>
T dynarr<T>::getData(int index) {
    return DATA[index];
}

template<class T>
void dynarr<T>::print(char endWith) {
    for (int i = 0; i < SIZE; ++i) {
        cout << DATA[i] << endWith;
    }
    if(endWith!='\n'){
        cout<<endl;
    }
}

template<class T>
int dynarr<T>::findFirst(T x) {
    for (int i = 0; i < SIZE; ++i) {
        if(x==DATA[i]){
            return i;
        }
    }
    return -1;
}

template<class T>
int dynarr<T>::findLast(T x) {
    for (int i = SIZE-1; i > -1; --i) {
        if(x==DATA[i]){
            return i;
        }
    }
    return -1;
}

template<class T>
int dynarr<T>::findCount(T x) {
    int count=0;
    for (int i = SIZE-1; i > -1; --i) {
        if(x==DATA[i]){
            count++;
        }
    }
    return count;
}

template<class T>
dynarr<T>::~dynarr() {
    delete[] DATA;
}