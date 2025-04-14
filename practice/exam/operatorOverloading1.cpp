# include <iostream>
using namespace std;

class number{
    int real , imaginary;
    public:
    number(int x=0, int y=0){
        real = x;
        imaginary = y;
    }

    number operator + (number o){
        number temp;
        temp.real = real + o.real;
        temp.imaginary = imaginary + o.imaginary;
        return temp;
    }

    number operator ++(){
        number temp;
        temp.real=real++;
        temp.imaginary=imaginary++;
        return temp;
    }

    void operator -(){
        real--;
        imaginary--;
    }

    void display(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};


int main(){
    number c1(3,8), c2(2,3), c3, c4;

    c3 = c1+c2;
    c3.display();
    c4=++c1;
    c1.display();
    -c2;
    c2.display();
}