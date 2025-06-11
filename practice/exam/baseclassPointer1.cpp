#include <iostream>
using namespace std;

class A{
    public:

    void disp(){
        cout<<"hello";
    }
};
class B{
    public:

    void disp(){
        cout<<"hellow";
    }
};
class C:public B,public A{

};

int main(){
    C obj;

    obj.B::disp();
    
}