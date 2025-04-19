# include <iostream> 
using namespace std;

class A{
    public:
    int num1;
    A(){
        num1 = 0;
    }
    void display(){
        cout << num1;
    }

};
class B:virtual public A{
    public:
    int num2;

};

class C: virtual public A{
    public:
    int num3;

};


class D: public B, public C{
    

};

int main(){
    D obj;
    obj.display();
}