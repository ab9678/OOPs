# include <iostream> 
using namespace std;

class A{
    public:
    int num1;

};
class B{
    public:
    int num2;

};

class C: public A, public B{
    public:
    int num3;
    C(){
        cin >> num1;
        cin >> num2;
        cin >> num3;
    }
    void show(){
        cout<<"Data: "<<num1+num2+num3;
    }

};

int main(){
    C obj;
    obj.show();
}