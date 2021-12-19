#include <bits/stdc++.h>
#include "binarysearchtree.cpp"

using namespace std;

template<class T>
void IS_EMPTY(TreeType<T> &treeNode) {
    cout << (treeNode.IsEmpty() ? "Tree is empty" : "Tree is not empty") << endl;
}

template<class T>
void INSERT(TreeType<T> &treeNode, T *arr, int size) {
    for (int i = 0; i < size; ++i) {
        treeNode.InsertItem(arr[i]);
    }
}

template<class T>
void FIND(TreeType<T> &treeNode, T x) {
    bool found;
    treeNode.RetrieveItem(x, found);
    cout << (found ? "Item is found" : "Item is not found") << endl;
}

template<class T>
void PRINT(TreeType<T> &treeNode, OrderType orderType) {
    bool finished = treeNode.IsEmpty();
    T item;
    treeNode.ResetTree(orderType);
    while (!finished) {
        treeNode.GetNextItem(item, orderType, finished);
        cout << item << " ";
    }
    cout << endl;
}

template<class T>
void Task_1(T type) {
    TreeType<T> treeNode;

    IS_EMPTY(treeNode);

    T arr[] = {4, 9, 2, 7, 3, 11, 17, 0, 5, 1};
    INSERT(treeNode, arr, sizeof(arr) / sizeof(arr[0]));

    IS_EMPTY(treeNode);

    cout << treeNode.LengthIs() << endl;

    FIND(treeNode, 9);

    FIND(treeNode, 13);

    PRINT(treeNode, IN_ORDER);

    PRINT(treeNode, PRE_ORDER);

    PRINT(treeNode, POST_ORDER);

    treeNode.MakeEmpty();
}

int main() {
    Task_1(INT32_C(0));
}