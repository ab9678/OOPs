# include <iostream>
using namespace std;

class number{
    int real , imaginary;
    public:
    number(int x=0, int y=0){
        real = x;
        imaginary = y;
    }


    void operator -(){
        real+=2;
        imaginary--;
    }

    void display(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};


int main(){
    number c2(2,3);

    -c2;
    c2.display();
}