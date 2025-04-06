# include <iostream>
using namespace std;

class base{
    public:
    virtual void hello(){
        cout << "Hello parent";
    }
};

class derived: public base{
    public:
    void hello(){
        cout<<"Hello derived";
    }
};

int main(){
    base *ptr;

    ptr = new derived;

    ptr->hello();



}