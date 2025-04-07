# include <iostream>
using namespace std;

class base{
    public:
    void hello(){
        cout << "Hello parent";
    }
   
};

class derived: public base{
    public:
    int x, y;
    void hello(){
        cout<<"Hello derived";
    }
};

int main(){
    base *ptr;

    base ob;
    derived od;

    ptr = &od;

    ptr->hello();

    derived obj;

    base a = obj;

}