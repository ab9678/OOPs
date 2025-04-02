# include <iostream>
using namespace std;

class student{

    string name;
    int roll;

    friend class Data;

};

class Data{
    public:
    void printData(student &obj){
        obj.name =  "xyz";
        obj.roll = 11;
    }
};

int main(){
    student s1;

    Data d;
    d.printData(s1);

}