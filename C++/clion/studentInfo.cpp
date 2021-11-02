#include "studentInfo.h"

studentInfo::studentInfo() {
    ID = "";
    NAME = "";
    CGPA = 0;
}

studentInfo::studentInfo(string id, string name, double cgpa) {
    ID = std::move(id);
    NAME = std::move(name);
    CGPA = cgpa;
}

bool studentInfo::operator==(const studentInfo& x) const  {
    return ID == x.ID;
}

bool studentInfo::operator!=(const studentInfo& x) const  {
    return ID != x.ID;
}


ostream &operator<<(ostream &os, studentInfo &s) {
    return os << s.ID << " " << s.NAME << " " << s.CGPA;
}

