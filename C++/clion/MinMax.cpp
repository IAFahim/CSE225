#include "MinMax.h"

template<class t>
MinMax<t>::MinMax() = default;

template<class T>
void MinMax<T>::InitializerMinMax(T *numbers, int size) {
    numbers= new T[size];
}