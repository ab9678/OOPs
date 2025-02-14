# include <iostream>
#include <string>
using namespace std;
//  demonstrate the use of static data members, static member function and array of obj. create a class of student with name, roll
class student{
    public:
    int roll;
    string name;

    int getData(string n, int r){
        roll = r;
        name = n;
        return 0;
    }
    void display(){
        cout << "Name: "<<name<<endl;
        cout << "Roll: "<<roll<<endl;

    }
};

int main(){
    student s[5];
    string n;
    int i=0,r;
    for(i=0;i<5;i++){
        cin.ignore();
        getline(cin, n);
        
        cin>>r;
        s[i].getData(n,r);
    }

    for (i=0;i<5;i++){
        s[i].display();
    }
}