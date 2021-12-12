#include "Student.h"

#include <utility>

const std::string &Student::getName() const {
    return Name;
}

void Student::setName(const std::string &name) {
    Name = name;
}

int Student::getId() const {
    return ID;
}

void Student::setId(int id) {
    ID = id;
}

const std::string &Student::getDepartment() const {
    return Department;
}

void Student::setDepartment(const std::string &department) {
    Department = department;
}

int Student::getCgpa() const {
    return CGPA;
}

void Student::setCgpa(int cgpa) {
    CGPA = cgpa;
}

Student::Student(std::string name, int id, std::string department, int cgpa) : Name(std::move(name)), ID(id),
                                                                               Department(std::move(department)),
                                                                               CGPA(cgpa) {}

Student::Student() {
    setName("");
    setId(0);
    setDepartment("");
    setCgpa(4);
}

std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << "Name: " << student.Name << " ID: " << student.ID << " Department: " << student.Department << " CGPA: "
       << student.CGPA;
    return os;
}

bool Student::operator==(const Student &rhs) const {
    return Name == rhs.Name &&
           ID == rhs.ID &&
           Department == rhs.Department &&
           CGPA == rhs.CGPA;
}

bool Student::operator!=(const Student &rhs) const {
    return !(rhs == *this);
}

Student::~Student() {
    std::string null;
    this->Name = null;
    this->ID = NULL;
    this->CGPA = NULL;
    this->Department = null;
}


void Students::DELETE(const Student &student) {
    int location = 0;
    for (int i = 0; i < size; ++i) {
        if (students[i] != student) {
            location++;
        }
    }
    students[location] = students[size - 1];
}

void Students::ADD(const Student &student) {
    students[at++] = student;
}

Students::Students(int size) : size(size) {
    students = new Student[size];
}


