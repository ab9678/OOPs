/*
    Create a class Student with the following features:

    Private Data Members:

    name (string) → Stores the student's name.
    marks (int) → Stores the student's marks.
    A static member count to keep track of the total number of students.
    Constructor:

    Initializes name and marks using a parameterized constructor.
    Increments count every time a new student object is created.
    Array of Objects:

    In main(), create an array of Student objects to store details of multiple students.
    Friend Class Result (Friend Function):

    Create a separate class Result.
    Define a friend function display() that prints each student’s name and marks.
    Also, print the total number of students using the static member count.
*/

# include <iostream>
# include <string>
using namespace std;

class student{
    string name;
    int marks;
    static int count;

    public:
    student(){
        count++;
    }

    student(string n, int m){
        name = n;
        marks = m;
    }

    friend class result;

};
int student::count = 0;

class result{
    public:
    void display(student *s){
        for(int i=0;i<5;i++){
            cout <<"Name: " <<s[i].name<<endl<<"Marks: "<<s[i].marks<<endl;  
        }
        cout<<"Number of students: "<<student::count;
    }
    
};


int main(){

    student s[5];
    int i;

    // student s2;

    string name;
    int marks;
    
    for (i=0;i<5;i++){
        cout<<"Name: ";cin>>name;
        // cin.ignore();
        cout<<"Marks: ";cin>>marks;
        cout<<endl;

        s[i]=student(name,marks);
    }

    result res;
    res.display(s);


}