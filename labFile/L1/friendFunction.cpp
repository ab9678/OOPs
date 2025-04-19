# include <iostream>
using namespace std;

class student{
    int roll;
    string name;

    friend void getData(student&);
    friend void display(student&);
};

void getData(student &obj){
    cout << "Enter name: ";
    cin >> obj.name;
    cout <<"Enter roll no. ";
    cin >> obj.roll;
}

void display(student &obj){
    cout<<"Name: "<<obj.name<<endl<<"Roll: "<<obj.roll<<endl;
}

int main(){
    student s1;
    getData(s1);
    display(s1);
}