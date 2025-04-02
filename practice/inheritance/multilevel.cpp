# include <iostream>
using namespace std;

class A{
    public:
    int num1;

};
class B: public A{
    public:
    int num2;

};
class C: public B{
    public: 
    int num3;

    C(){
        num1 = 5;
        num2 = 6;
        num3 = num1+num2;
    }
};


int main(){
    C obj;
    cout <<obj.num3;
}