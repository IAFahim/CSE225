#include <bits/stdc++.h>
#include "binarysearchtree.cpp"

using namespace std;

template<class T>
TreeNode<T> *MinSpan(T *arr, int start, int end) {
    if (start > end)return nullptr;
    int mid = (end + start) / 2;
    auto *treeNode = new TreeNode<T>;
    treeNode->info = arr[mid];
    treeNode->left = MinSpan(arr, start, mid - 1);
    treeNode->right = MinSpan(arr, mid + 1, end);
    return treeNode;
}

void preOrder(TreeNode<int> *treeNode) {
    if (treeNode == nullptr)return;
    cout << treeNode->info << " ";
    preOrder(treeNode->left);
    preOrder(treeNode->right);
}

template<class T>
void Task_2(T type) {
    T arr[] = {11, 9, 4, 2, 7, 3, 17, 0, 5, 1};
    sort(arr, arr + (sizeof(arr) / sizeof(arr[0])));
    TreeNode<T> *treeNode = MinSpan(arr, 0, (sizeof(arr) / sizeof(arr[0])) - 1);
    preOrder(treeNode);
}

int main() {
    Task_2(INT32_C(0));
}