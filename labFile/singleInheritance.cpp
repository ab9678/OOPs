# include <iostream>
using namespace std;

class attendance{
    public:
    int att;

};
class student:public attendance{
    string name;
    int roll;
    public:
    student(){
        cin>>name;
        cin>>roll;
        cin>>att;
    }
    void display(){
        cout << "Name: "<<name<<endl<<"Roll: "<<roll<<endl<<"Attendance: "<<att;
    }

};
int main(){

    student s1;
    s1.display();

}