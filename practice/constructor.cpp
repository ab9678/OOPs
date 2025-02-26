# include <iostream>
using namespace std;

class student{

    int x;
    public:
    student(){}

    student(student &o){
        this->x = o.x;
    }

    student(int v){

    }




};



int main(){

    student s1(84);
    student x(78);
    student y;

    y=student(78);

    

}