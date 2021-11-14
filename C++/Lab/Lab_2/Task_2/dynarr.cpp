#include "dynarr.h"
#include <iostream>
#include "../../../practice/dynarr.h"


using namespace std;

dynarr::dynarr() {
    data = nullptr;
    size = 0;
}

dynarr::dynarr(int s) {
    data = new int[s];
}


void dynarr::allocate(int s) {
    data = new int[s];
}


void dynarr::setValue(int index, int value) {
    data[index] = value;
}


int dynarr::getValue(int index) {
    return data[index];
}

dynarr::~dynarr() {
    delete[] data;
}

