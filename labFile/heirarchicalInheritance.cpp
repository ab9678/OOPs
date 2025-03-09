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
};
class student: protected school{
    int roll;
    public:
    student(int r, string sub){
        roll = r;
        subject = sub;
    }
};

int main(){
    teacher T1(123,"English");
    student s1(84,"Python");
}
