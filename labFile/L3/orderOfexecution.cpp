# include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "Parent class constructor called"<<endl;
    }

    ~A(){
        cout << "Parent class destructor called"<<endl;
    }
};


class B: public A{
    public:
    B(){
        cout << "Child class constructor called"<<endl;
    }

    ~B(){
        cout << "Child class destructor called"<<endl;
    }
};


int main(){
    cout << "Start of main()"<<endl;
    B obj;
    cout << "End of main()"<<endl;
}