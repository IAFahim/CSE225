#include "List.h"
#include <iostream>

List::List() {
    head = nullptr;
}

void List::AddAll(List l) const {
    if (l.IsEmpty()) {
        return;
    }
    Node *ptr = head;
    while (ptr != nullptr) {
        ptr = ptr->next;
    }
    ptr->next = l.head;
}

bool List::IsEmpty() const {
    return size == 0;
}

int List::LengthIs() const {
    return size;
}

void List::Print() const {
    Node *ptr = head;
    while (ptr != nullptr) {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

void List::AddAsHead(int i) {
    Node *node = new Node(i);
    node->next = this->head;
    head = node;
    size++;
}

void List::AddASTail(int i) {
    if (head == nullptr) {
        AddAsHead(i);
        return;
    }
    Node *ptr = head;
    while (ptr != nullptr) {
        ptr = ptr->next;
    }
    ptr->next = new Node(i);
    size++;
}

Node List::Find(int i) const {
    Node *ptr = head;
    while (ptr != nullptr && ptr->data != i) {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    return *ptr;
}

void List::Reverse() {
    Node *ptr = head, *pre = nullptr;
    while (ptr != nullptr) {
        Node *temp = ptr->next;
        ptr->next = pre;
        pre = ptr;
        head = pre;
        ptr = temp;
    }
}

int List::PopHead() {
    int data = head->data;
    head = head->next;
    return data;
    size--;
}

void List::RemoveFirst(int i) {
    if (head == nullptr)return;
    if (head->data == i) {
        Node *ptr = head;
        head = head->next;
        delete (ptr);
        size--;
    } else {
        Node *ptr = head;
        while (ptr->next != nullptr && ptr->next->data != i) {
            ptr = ptr->next;
        }
        if (ptr->next == nullptr) {
            Node *Rptr = head;
            Rptr->next = Rptr->next->next;
            delete (Rptr);
            size--;
        }
    }
}

void List::RemoveAll(int i) {
    if (head == nullptr)return;
    if (head->data == i) {
        Node *ptr = head;
        head = head->next;
        delete (ptr);
        size--;
    } else {
        Node *ptr = head;
        while (ptr->next != nullptr) {
            if (ptr->data == i) {
                Node *Rptr = head;
                Rptr->next = Rptr->next->next;
                delete (Rptr);
                size--;
            }
            ptr = ptr->next;

        }
        if (ptr->next == nullptr) {
            Node *Rptr = head;
            Rptr->next = Rptr->next->next;
            delete (Rptr);
            size--;
        }
    }
}


