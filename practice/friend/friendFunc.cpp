# include <iostream>
# include <string>
using namespace std;

class student{

    int roll;
    string name;

    friend void accessData(student &s,string name);

    friend void displayData(student &s);

};

void accessData(student &s,string name){
    s.name = name;
    s.roll=84;
}

void displayData(student &s){
    cout<<s.name<<endl<<s.roll<<endl;
}

int main(){
    student s1;
    accessData(s1,"xyz");
    displayData(s1);
}