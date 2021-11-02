#include <bits/stdc++.h>
#include "unsortedtype.cpp"

using namespace std;

template<class T>
void PRINT(UnsortedType<T> *s) {
    T c;
    s->ResetList();
    for (int i = 0; i < s->LengthIs(); ++i) {
        s->GetNextItem(c);
        cout << c << endl;
    }
}

template<class T>
void LOOK(UnsortedType<T> *s, T &x) {
    bool ok;
    s->RetrieveItem(x, ok);
    if (ok) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }
}

template<class T>
void IS_FULL(UnsortedType<T> *s) {
    if (s->IsFull()) {
        cout << "List is full" << endl;
    } else {
        cout << "List is not full" << endl;
    }
}

void task_1() {
    UnsortedType<int> s;

    s.InsertItem(5);
    s.InsertItem(7);
    s.InsertItem(6);
    s.InsertItem(9);

    PRINT(&s);

    cout << s.LengthIs() << endl;

    s.InsertItem(1);

    PRINT(&s);

    int x;
    LOOK(&s, x = 4);
    LOOK(&s, x = 5);
    LOOK(&s, x = 9);
    LOOK(&s, x = 10);

    IS_FULL(&s);

    s.DeleteItem(x = 5);

    IS_FULL(&s);

    s.DeleteItem(x = 1);

    PRINT(&s);

    s.DeleteItem(x = 6);

    PRINT(&s);
}

int main() {
    task_1();
}