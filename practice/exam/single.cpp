# include <iostream>
using namespace std;

class A{
    public:
    int num;
};

class B: public A{
    public:
    B(){
        cin>>num;
        num=num+10;
    }
};

int main(){
    B obj;
    cout<<obj.num;
}