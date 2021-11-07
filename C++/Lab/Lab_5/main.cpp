#include <bits/stdc++.h>
#include "sortedtype.cpp"
#include "timeStamp.h"
#include <ctime>

using namespace std;

template<class T>
void PRINT(SortedType<T> *s, char endWith) {
    T c;
    s->ResetList();
    int n=s->LengthIs();
    for (int i = 0; i < n; ++i) {
        s->GetNextItem(c);
        cout << c;
        if(i+1!=n){
            cout<<endWith;
        }
    }
    if (endWith != '\n') {
        cout << endl;
    }
}

template<class T>
void LOOK(SortedType<T> *s, T x) {
    bool ok;
    s->RetrieveItem(x, ok);
    if (ok) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }
}

template<class T>
void IS_FULL(SortedType<T> *s) {
    if (s->IsFull()) {
        cout << "List is full" << endl;
    } else {
        cout << "List is not full" << endl;
    }
}

void task_1() {
    SortedType<int> list;

    cout << list.LengthIs() << endl;

    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(4);
    list.InsertItem(2);
    list.InsertItem(1);

    PRINT(&list, ' ');

    LOOK(&list, 6);

    LOOK(&list, 5);

    IS_FULL(&list);

    list.DeleteItem(1);

    PRINT(&list, ' ');

    IS_FULL(&list);
}

void task_2() {
    SortedType<timeStamp> list;

    timeStamp a(15, 34, 23);
    timeStamp b(13, 13, 02);
    timeStamp c(43, 45, 12);
    timeStamp d(25, 36, 17);
    timeStamp e(52, 02, 20);
    list.InsertItem(a);
    list.InsertItem(b);
    list.InsertItem(c);
    list.InsertItem(d);
    list.InsertItem(e);

    timeStamp x(25, 36, 17);
    list.DeleteItem(x);

    PRINT(&list, '\n');
}

int main() {
    task_1();
}