# include <iostream>
using namespace std;

class Abstract{
    virtual void add()=0;
    virtual void sub()=0;
};

class A: public Abstract{
    int a,b;
    public:
    void add (){
        cin>>a>>b;
        cout<<a+b;
    }
    void sub(){}
};

class B:public Abstract{
    int a,b;
    public:
    void sub(){
        cin>>a>>b;
        cout <<a-b;
    }
    void add(){}
};

int main(){
    A o1;
    o1.add();
    B o2;
}