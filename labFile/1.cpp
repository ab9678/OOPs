// area and peremeter of circle using class

#include<iostream>
using namespace std;
class rect{
    public:
    int l,b;
    public: void change(int &l,int &b);
    void ar(int l,int b);
};
void rect::ar(int l,int b){
    int a=l*b;
    cout<<"Area before change : "<<a<<endl;
}
void rect::change(int &l, int &b){
    l=4;
    b=3;
    int area=l*b;
    cout<<"Area after change : "<<area<<endl;
}
int main(){
    rect R;
    R.ar(4,6);
    R.change(R.l,R.b);
}