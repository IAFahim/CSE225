#ifndef CLION_LIST_H
#define CLION_LIST_H

class Node {
public:
    int data;
    Node *next;

    explicit Node(int data) : data(data), next(nullptr) {}
};

class List {
public:
    int size = 0;
    Node *head{};
    List();
    bool IsEmpty() const;
    int LengthIs() const;
    void Print() const;
    void AddAsHead(int i);
    void AddASTail(int i);
    Node Find(int i) const;
    void Reverse();
    int PopHead();
    void RemoveFirst(int i);
    void RemoveAll(int i);
    void AddAll(List l) const;

};


#endif //CLION_LIST_H
