# include <iostream>
using namespace std;

class number{

    int real, i;
 
    public:
    
    number(int x=0,int y =0){
        real = x;
        i = y;
    }

    number operator + (number obj){
        number temp;
        temp.real = real+obj.real;
        temp.i = i+obj.i;

        return temp;
    }
    number operator - (number obj){
        number temp;
        temp.real = real-obj.real;
        temp.i = i-obj.i;

        return temp;
    }
    number operator * (number obj){
        number temp;
        temp.real = real*obj.real;
        temp.i = i*obj.i;

        return temp;
    }
    number operator / (number obj){
        number temp;
        temp.real = real/obj.real;
        temp.i = i/obj.i;

        return temp;
    }


    void show(){
        cout <<real<<" i" <<i<<endl;
    }

};

int main(){
    number n1(21,2);
    number n2(23,3);

    number n3 = n2+n1;
    n3.show();
    n3 = n2-n1;
    n3.show();
    n3 = n2*n1;
    n3.show();
    n3 = n2/n1;
    n3.show();
 
}