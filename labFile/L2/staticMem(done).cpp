# include <iostream>
using namespace std;

class A{
    public:
    int xyz;
    static int x;
    A(){
        x++;
        cout <<"Enter Data: ";
        cin >>xyz;
        display();
    }
    void display(){
        cout <<"Current number of objects: "<<x<<endl;
        cout <<"Data: "<<xyz<<endl;
    }
};
int A::x=0;

int main(){
    A o1,o2;
    
}