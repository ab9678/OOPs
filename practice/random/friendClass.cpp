# include <iostream>
using namespace std;

class student{
    int roll;
    int id;
    friend class school;
};

class school{
    public:

    school(student &obj){
        cin >> obj.id;
        cin >> obj.roll;
    }

    void display(student &obj){
        cout<<"Roll: ";
        cout<< obj.roll;
        cout<<"Id: ";
        cout << obj.id;
    }
};


int main(){

    student s1;
    school sc(s1);
    sc.display(s1);
}