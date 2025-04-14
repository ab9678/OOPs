#include <iostream>
using namespace std;

class Array{
    public:
    int a[5];
    Array(){
        int i;
        for (i=0;i<5;i++){
            a[i]=0;
        }
    }
    Array(int x){
        int i;
        cout<<"Enter data: "<<endl;
        for (i=0;i<5;i++){
            cin >> a[i];
        }
    }

    void display(){
        int i;
        for (i=0;i<5;i++){
            cout<<a[i]<<"\t";
        }
    }

    Array operator + (Array o){
        Array temp;
        int i;
        for (i=0;i<5;i++){
            temp.a[i] = a[i] + o.a[i];
        }

        return temp;
    }
};

int main(){
    Array a1(1),a2(1),a3;

    a3 = a2+a1;
    a3.display();
}