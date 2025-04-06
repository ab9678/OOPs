# include <iostream> 
using namespace std;

class A{
    public:
    int num1;
    void display(){
        cout << num1;
    }

};
class B{
    public:
    int num2;
    void display(){
        cout<< num2;
    }
};

class C: public A, public B{
    public:
    int num3;
    C(){
        cin >> num1;
        cin >> num2;
        cin >> num3;
    }

};

int main(){
    C obj;
    obj.A::display();
}