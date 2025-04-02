# include <iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    person(string name, int age){
        this->age = age;
        this->name = name;
    }
};

class student: public person{
    public:
    int roll;
    student(string name, int age):person(name,age){
        /*
            notice here I have given :person(name,age). What is that?
            when we have a constructor in the parent class, the constructor gets automatically called by the object of the child class, but this happens only when the parent class's constructor is default or non parameterised. 
            But what if it is parameterised?
            Notice, the object is of child class, so it can call child's constructor right?, now we can pass the arguments for the parent constructor, in child's constructor, but this doesnt alone ensure the parent's constructor is called.
            
            Hence,  we need to explicitly call it parent_class_name() and pass the arguments given to the child's constructor here, 'string name, int age', to the parents constructor, just like a function call, parent_class_name(name, age).

            Another solution will be to have an extra default constructor in parent, but that kills the use case in the forst place;
        */
        get();
        show();
    }
    void get(){
        cin >> roll;
    }
    void show(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
    }
};




int main(){
    student s1("Abhigyan",21);

}

