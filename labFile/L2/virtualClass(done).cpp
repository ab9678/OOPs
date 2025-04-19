# include <iostream> 
using namespace std;

// Virtual function actually comes into play when we are using pointer to the base class. Base class pointer. Let's say we are using a pointer which is pointing to the base class and we make an object for that pointer. Now we call the display function with that pointer. What will happen is if the function is not virtual, it will call simply the display function in the base class. But if the function is virtual, compiler will know that one of its child has overridden this function. Hence, this compiler will call the child's version of the display function, not the parent's, not the base class's, though the pointer was of the base class. This is where virtual function shines. Otherwise, if we go simply, then runtime polymorphism is also true for functions, normal functions, because child class will always override the parent class's stuff. But what if the pointer is of parent's parent class's? That's where virtual function shines, because virtual function directly knows which function to call, though it belongs to the parent.


class A{
    public:
    int num1;

    virtual void hello()=0;

};
class B:public A{
    public:
    int num2;

    void hello(){
        cout<<"Hello child 1";
    }

};

class C: public B{
    public:
    
    void hellow(){
        cout <<"Hello child 2";
    }

};

int main(){
    A *ptr;
    ptr = new B;

    ptr->hello();
}