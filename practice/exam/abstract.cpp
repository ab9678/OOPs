# include <iostream>
using namespace std;

class Abstract{
    virtual void add()=0;
};

class A: public Abstract{
    int a,b;

    void add (){
        cout<<a+b;
    }
};

class B:public A, public Abstract{
    int a,b;
    void add(){
        cout <<a+b;
    }
};

int main(){

}