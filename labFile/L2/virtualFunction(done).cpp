#include <iostream>

using namespace std;


class A{
    public:
    int num1;

    virtual void hello()=0;
    virtual void display(){
        cout<<"Empty";
    }
};

class B:public A{
    public:

    void hello(){
        cout<<"Hello child 1"<<endl;
        cout <<"Enter data: "<<endl;
        cin >> num1;
    }

    void display(){
        cout <<"Data: "<<num1;
    }

};


int main(){
    A *ptr;

    ptr = new B;
    ptr->hello();
    ptr->display();
}