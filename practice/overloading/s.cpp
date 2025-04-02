//Program to add,sub,mul,div 2 complex numbers using operator overloading
#include<iostream>
using namespace std;
class Complex{
    int real,i;
    public:
    Complex(){
        real=0;
        i=0;
    };
    Complex(int n,int m){
        real=n;
        i=m;
    }
    Complex operator +(Complex C){
        Complex temp;
        temp.real=real+C.real;
        temp.i=i+C.i;
        return temp;
    }
    Complex operator -(Complex C){
        Complex temp;
        temp.real=real-C.real;
        temp.i=i-C.i;
        return temp;
    }
    Complex operator *(Complex C){
        Complex temp;
        temp.real=real*C.real;
        temp.i=i*C.i;
        return temp;
    }
    Complex operator /(Complex C){
        Complex temp;
        temp.real=real/C.real;
        temp.i=i/C.i;
        return temp;
    }
    void show(){
        cout<<real<<" i"<<i<<endl;
    }
};
int main(){
    int n1,m1,n2,m2;
    cout<<"Enter the real number : ";
    cin>>n1;
    cout<<"Enter the imaginary number : ";
    cin>>m1;
    cout<<"Enter the real number : ";
    cin>>n2;
    cout<<"Enter the imaginary number : ";
    cin>>m2;
    Complex C(n1,m1),C2(n2,m2),C3;
    C3=C+C2;
    C3.show();
    C3=C-C2;
    C3.show();
    C3=C*C2;
    C3.show();
    C3=C/C2;
    C3.show();
}