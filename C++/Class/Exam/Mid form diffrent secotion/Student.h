#include <bits/stdc++.h>
#include <ostream>

#ifndef CLION_STUDENT_H
#define CLION_STUDENT_H


class Student {
    std::string Name;
    int ID{};
    std::string Department;
    int CGPA{};
public:
    Student();

    Student(std::string name, int id, std::string department, int cgpa);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getId() const;

    void setId(int id);

    const std::string &getDepartment() const;

    void setDepartment(const std::string &department);

    int getCgpa() const;

    void setCgpa(int cgpa);

    bool operator==(const Student &rhs) const;

    bool operator!=(const Student &rhs) const;

        virtual ~Student();
};

class Students{
    int size=0;
    int at=0;
    int Max{};
    Student *students;
public:
    explicit Students(int size);
    void ADD(const Student& student);
    void DELETE(const Student& student);
};


#endif //CLION_STUDENT_H
