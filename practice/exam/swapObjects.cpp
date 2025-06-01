// swap the members of one object with another of the same class;

# include <iostream>
# include <string>
using namespace std;

class student{
    public:
    string name, course, sub;

    student(){
        cin >> name;
        cin >> course;
        cin >> sub;
    }

    void swap(student &o1, student &o2){
        string tempName, tempCourse, tempSub;

        tempName=o1.name;
        tempCourse=o1.course;
        tempSub=o1.sub;

        o1.name = o2.name;
        o1.course = o2.course;
        o1.sub = o2.sub;

        o2.name = tempName;
        o2.course = tempCourse;
        o2.sub = tempSub;

    }


    void display(){

        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Subject: " << sub << endl;
    }
};


int main(){

    student s1,s2;

    s1.swap(s1,s2);

    s1.display();

}