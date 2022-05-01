#include <bits/stdc++.h>
#include "HashTable.cpp"

using namespace std;

int main() {
    HashTable hashTable;

    hashTable.Insert(10);
    hashTable.Insert(5);
    hashTable.Insert(200);
    hashTable.Insert(2000);
    hashTable.Print();

    hashTable.Delete(2000);
    hashTable.Print();

    cout << "index " << hashTable.Find(200) << endl;
    cout << "index " << hashTable.Find(2000) << endl;

    hashTable.Rehash();
    hashTable.Print();

    return 0;
}