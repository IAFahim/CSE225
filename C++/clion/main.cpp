#include <bits/stdc++.h>
#include "unsortedtype.cpp"
#include "studentInfo.h"

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
void GET(UnsortedType<T> *s, T &x) {
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
    GET(&s, x = 4);
    GET(&s, x = 5);
    GET(&s, x = 9);
    GET(&s, x = 10);

    IS_FULL(&s);

    s.DeleteItem(x = 5);

    IS_FULL(&s);

    s.DeleteItem(x = 1);

    PRINT(&s);

    s.DeleteItem(x = 6);

    PRINT(&s);
}

void task_2() {
    UnsortedType<studentInfo> s;

    studentInfo a("15234", "Jon", 2.6);
    studentInfo b("13732", "Tyrion", 3.9 );
    studentInfo c("13569", "Sandor", 1.2 );
    studentInfo d("15467", "Ramsey", 3.1);
    studentInfo e("16285", "Arya", 3.1);
    s.InsertItem(a);
    s.InsertItem(b);
    s.InsertItem(c);
    s.InsertItem(d);
    s.InsertItem(e);

    studentInfo x("15467","",0);
    s.DeleteItem(x);
    PRINT(&s);

    studentInfo g("13569","",0);
    GET(&s,g);
    cout<<g<<endl;

    PRINT(&s);
}

int main() {
    task_1();
    task_2();
}