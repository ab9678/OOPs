# include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this->age = age;
        this->name = name;
    }
};

class Student:public Person{
    public:
    int rollNo;

    Student(string name, int age, int roll):Person(name, age){
        this->rollNo = roll;
    }
};
class Teacher:public Person{
    public:
    string tID;
    Teacher(string name, int age, string tID): Person(name, age){
        this->tID = tID;
    }
};
class GradStudent:public Student{
    public:
    string researchPaper;

    GradStudent(string name, int age, int roll, string reasearchPaper):Student(name,age,roll){
        this->researchPaper = reasearchPaper;
    }
};
class TA:public Student, public Teacher{
    public:
    string subject;

    TA(string name, int age, int roll, string tID, string subject):Student(name,age,roll),Teacher(name,age,tID){
        this->subject = subject;

        show();
    }

    void show(){
        cout << "Name: " << Student::name << endl;
        cout << "Age: " << Student::age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Teacher ID: " << tID << endl;
        cout << "Subject: " << subject << endl;
    }

};

int main(){
    TA assistant1("Abhigyan", 21, 84, "TA-5123", "python");
}