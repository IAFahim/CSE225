#ifndef CLION_STUDENTINFO_H
#define CLION_STUDENTINFO_H

#include <bits/stdc++.h>

using namespace std;

class studentInfo {
private:
    string ID;
    string NAME;
    double CGPA;
public:
    studentInfo();

    studentInfo(string id, string name, double cgpa);

    bool operator==(const studentInfo &x) const;

    bool operator!=(const studentInfo &x) const;

    friend ostream &operator<<(ostream &os, studentInfo &s);
};


#endif //CLION_STUDENTINFO_H