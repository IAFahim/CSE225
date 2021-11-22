#include <bits/stdc++.h>
#include "stacktype.cpp"

using namespace std;

void BALANCED(string str, char start, char end) {
    StackType<char> s;
    int i = 0;
    while (i < str.size()) {
        if (str[i] == start) {
            s.Push(str[i]);
        } else if (str[i] == end) {
            if (!s.IsEmpty()) {
                if (s.Top() == start) {
                    s.Pop();
                } else {
                    cout << "Not balanced" << endl;
                    return;
                }
            } else {
                cout << "Not balanced" << endl;
                return;
            }
        }
        i++;
    }
    if (s.IsEmpty()) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not balanced" << endl;

    }
}

void task_2() {
    string str1 = "()";
    string str2 = "(())()(()())()";
    string str3 = "(())()((()";
    string str4 = "(())))((()";

    BALANCED(str1, '(', ')');
    BALANCED(str2, '(', ')');
    BALANCED(str3, '(', ')');
    BALANCED(str4, '(', ')');
}

int main() {
    task_2();
}