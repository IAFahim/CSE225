#include "dynarr.h"
#include <iostream>

using namespace std;

dynarr::dynarr() {
    data = nullptr;
    size = 0;

    //task 3;
    data_2d = nullptr;
}

dynarr::dynarr(int s) {
    data = new int[s];
}

//for task 3
dynarr::dynarr(int width, int height) {
    data_2d = new int *[height];
    for (int i = 0; i < height; ++i) {
        data_2d[i] = new int[width];
    }
}

//for task 2
void dynarr::allocate(int s) {
    data = new int[s];
}

//for task 3
void dynarr::allocate(int width, int height) {
    data_2d = new int *[height];
    for (int i = 0; i < height; ++i) {
        data_2d[i] = new int[width];
    }
}

void dynarr::setValue(int index, int value) {
    data[index] = value;
}

//for task 3
void dynarr::setValue(int x, int y, int value) {
    data_2d[y][x] = value;
}


int dynarr::getValue(int index) {
    return data[index];
}

//for task 3
int dynarr::getValue(int x, int y) {
    return data_2d[y][x];
}

dynarr::~dynarr() {
    delete[] data;

    //for task 3
    delete[] data_2d;
}