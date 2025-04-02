#include <iostream>
using namespace std;

class A{
    public:
    int r;
    void getData(){
        cout<<"Roll: ";
        cin >> r;
    }
};
class B{
    public:
    string name;

    void getData(){
        cout<<"Name: ";
        cin>>name;
    }
};
class C: public B,public A{
    public:
    string stream;

    // void getData(){
    //     cout << "Stream: ";
    //     cin >> stream;
    // }
};


int main(){
    C obj;
    obj.B::getData();
}