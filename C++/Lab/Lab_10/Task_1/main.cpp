#include <bits/stdc++.h>
#include "stacktype.cpp"

using namespace std;

int orderOfOperations(const char &c) {
    if (c == '+' || c == '-') {
        return 1;
    } else if (c == '*' || c == '/' || c == '%') {
        return 2;
    } else {
        return 0;
    }
}

template<class T>
T operation(const T &a, const T &b, const char &c) {
    switch (c) {
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '+':
            return a + b;
        case '-':
            return a - b;
        default:
            return 0;
    }
}

template<class T>
T getDefaultOrTop(StackType<T> &numbers, const char &c) {
    if (numbers.IsEmpty()) {
        throw invalid_argument("Invalid expression");
    } else {
        T n = numbers.Top();
        numbers.Pop();
        return n;
    }
}

template<class T>
void handleBeforePostingOperation(StackType<T> &numbers, StackType<char> &ops) {
    if (!numbers.IsEmpty()) {
        T a = numbers.Top();
        numbers.Pop();
        char c = ops.Top();
        ops.Pop();
        T b = getDefaultOrTop(numbers, c);
        numbers.Push(operation<T>(b, a, c));
    }
}


double exprSolve(string str) {
    StackType<double> numbers{};
    StackType<char> ops{};

    for (int i = 0; i < str.size(); ++i) {
        char c = str[i];
        if (c == ' ') {
            continue;
        } else if (isdigit(c)) {
            double x = 0;
            while (i < str.length() && isdigit(str[i])) {
                x = (x * 10) + str[i] - '0';
                i++;
            }
            i--;
            numbers.Push(x);
        } else if (c == '(') {
            ops.Push(c);
        } else if (c == ')') {
            while (!ops.IsEmpty() && ops.Top() != '(') {
                handleBeforePostingOperation(numbers, ops);
            }
            if (!ops.IsEmpty()) {
                ops.Pop();
            }
        } else {
            while (!ops.IsEmpty() && orderOfOperations(ops.Top()) >= orderOfOperations(c)) {
                handleBeforePostingOperation(numbers, ops);
            }
            ops.Push(c);
        }
    }
    while (!ops.IsEmpty()) {
        handleBeforePostingOperation(numbers, ops);
    }
    return numbers.Top();
}

void task_1() {
    string str[] = {
            "10 + 3 * 5 / (16 - 4)",
            "(5 + 3) * 12 / 3 ",
            "3 + 4 / (2 - 3) * / 5",
            "7 / 5 + (4 - (2) * 3 "
    };
    for (auto &i: str) {
        try {
            cout << exprSolve(i) << endl;
        } catch (exception &e) {
            cout << e.what() << endl;
        }
    }
}

int main() {
    task_1();
}