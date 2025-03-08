# include <iostream>
using namespace std;

class attendance{
    protected:
    int attendance;
};
class marks{
    protected:
    int marks;
};

class student:protected attendance, protected marks{
    string name;
    int roll;
    public:
    student(){
        cout <<"Name: ";
        cin >> name;
        cout <<"Roll: ";
        cin >> roll;
        cout<< "Marks: ";
        cin >> marks;
        cout << "Attendance: ";
        cin >> attendance;
        
    }

    void display(){
        cout << "Name: "<<name<<endl<<"Roll: "<<roll<<endl<<"Marks: "<<marks<<endl<<"Attendance: "<<attendance<<endl;
    }
};

int main(){

    student s1;

    s1.display();

}