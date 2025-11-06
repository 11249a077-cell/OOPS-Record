#include <iostream>
using namespace std;

class Person {
protected:
    char name[20];
    int age;
public:
    void getPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayPerson() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

// Use virtual inheritance to avoid duplicate Person
class Student : virtual public Person {
protected:
    int rollNo;
    float marks;
public:
    void getStudent() {
        cout << "\n--- Student Information ---\n";
        getPerson();
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayStudent() {
        cout << "\n--- Student Information ---";
        displayPerson();
        cout << "\nRoll Number: " << rollNo;
        cout << "\nMarks: " << marks;
    }
};

class Teacher : virtual public Person {
protected:
    char subject[20];
    float salary;
public:
    void getTeacher() {
        cout << "\n--- Teacher Information ---\n";
        getPerson();
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayTeacher() {
        cout << "\n--- Teacher Information ---";
        displayPerson();
        cout << "\nSubject: " << subject;
        cout << "\nSalary: " << salary;
    }
};

class Result : public Student, public Teacher {
private:
    float total;
public:
    void getResult() {
        getStudent();
        getTeacher();
        total = marks + salary;  // Just to show a combined result
    }
    void displayResult() {
        displayStudent();
        displayTeacher();
        cout << "\nTotal (marks + salary): " << total << endl;
    }
};

int main() {
    Result r;
    r.getResult();
    r.displayResult();
    return 0;
}
