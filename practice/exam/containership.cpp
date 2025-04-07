# include <iostream>
using namespace std;


class student {
    public:
    int roll;

};

class school{
    student s1;
    public:
    void display(){
        s1.roll = 90;
        cout<<s1.roll;
    }
};


int main(){
    school o1;

    o1.display();
}
