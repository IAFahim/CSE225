#include <bits/stdc++.h>
#include "quetype.cpp"

using namespace std;

class Student {
public:
    string name;
    int bangla;
    int english;
    int total;

    Student(string name, int bangla, int english) :
            name(std::move(name)),
            bangla(bangla),
            english(english),
            total(bangla + english) {}

    friend ostream &operator<<(ostream &os, const Student &student) {
        os << student.name << "\t"
           << student.bangla << "\t"
           << student.english << "\t"
           << student.total;
        return os;
    }
};

void Question_3() {
    Student olivia("Ovlvia", 88, 85);
    Student harris("Harris", 45, 90);
    Student jacob("Jacob", 75, 76);
    Student isla("Isla", 77, 87);
    cout << olivia << endl;
    cout << harris << endl;
    cout << jacob << endl;
    cout << isia << endl;
}

int main() {
    Question_3();
}