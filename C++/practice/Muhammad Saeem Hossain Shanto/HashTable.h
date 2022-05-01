#ifndef CLION_HASHTABLE_H
#define CLION_HASHTABLE_H

class HashTable {

private:
    int MAX_SIZE = 20, size = 0;
    int *table{};

public:
    HashTable();
    int Find(int x) const;
    void Insert(int x);
    void Delete(int x);
    void Print() const;
    void Rehash() const;

};

#endif //CLION_HASHTABLE_H
