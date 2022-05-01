//
// Created by Fahim on 01/05/2022.
//
#include "HashTable.h"
#include <iostream>

using namespace std;

HashTable::HashTable() {
    table = new int[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; ++i) {
        table[i] = -2;
    }
}

int HashTable::Find(int x) const {
    int hashIndex = x % MAX_SIZE;
    for (int i = 0; i < MAX_SIZE; ++i) {
        if (table[hashIndex] == x) {
            return hashIndex;
        }
        hashIndex = (hashIndex + 1) % MAX_SIZE;
    }
    return -1;
}

void HashTable::Insert(int x) {
    if (MAX_SIZE <= size) {
        cout << "HashTable Full (" << size << "/" << MAX_SIZE << ")\n";
        return;
    }
    int hashIndex = x % MAX_SIZE;
    int count = 0;
    while (table[hashIndex] >= 0 && count <= MAX_SIZE) {
        hashIndex = (hashIndex + 1) % MAX_SIZE;
    }
    if (table[hashIndex] == -2) {
        size++;
    }
    table[hashIndex] = x;
}

void HashTable::Delete(int x) {
    int hashIndex = x % MAX_SIZE;
    int count = 0;
    while (table[hashIndex] != x && count <= MAX_SIZE) {
        hashIndex = (hashIndex + 1) % MAX_SIZE;
        count++;
    }
    if (count == MAX_SIZE) {
        cout << "couldn't find " << x << "\n";
    } else {
        table[hashIndex] = -1;
        size--;
    }
}

void HashTable::Print() const {
    cout << "size " << size << "\n";
    for (int i = 0; i < MAX_SIZE; ++i) {
        if (0 <= table[i]) {
            cout << "index " << i << ", value " << table[i] << "\n";
        }
    }
}

void HashTable::Rehash() const {
    for (int i = 0; i < MAX_SIZE; ++i) {
        if (table[i] == -1) {
            table[i] = -2;
        }
    }
}
    