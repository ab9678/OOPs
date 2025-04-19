# include <iostream>
using namespace std;

class school{

    protected:
    string subject;
    
};

class teacher: protected school{
    int teacherId;
    public:
    teacher(int id, string sub){
        teacherId = id;
        subject = sub;
    }
    void display(){
        cout << "Teacher ID: "<<teacherId<<endl<<"Subject: "<<subject;
    }
};
class student: protected school{
    int roll;
    public:
    student(int r, string sub){
        roll = r;
        subject = sub;
    }

    void display(){
        cout << "Roll: "<<roll<<endl<<"Subject: "<<subject;
    }
};

int main(){
    teacher T1(123,"English");
    student s1(84,"Python");
    T1.display();
    s1.display();
}
