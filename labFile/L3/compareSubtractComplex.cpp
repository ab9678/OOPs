# include <iostream>
using namespace std;
class complex{
    int r,i;
    public:
    complex(){
        r=0;
        i=0;
    }
    void getter(int r, int i){
        this->r = r;
        this->i = i;
    }

    bool operator == (complex obj){
        return ((r == obj.r) && (i = obj.i));
    }

    complex operator - (complex obj){
        complex temp;
        temp.r = r - obj.r;
        temp.i = i - obj.i;

        return temp;
    }

    void display(){
        cout << r<<" + "<<i;
    }
};


int main(){
    complex c1,c2;

    c1.getter(2,3);
    c2.getter(2,3);

    if (c1 == c2){
        cout << "They are same";
    }else{
        complex c3 = c2-c1;
        c3.display();
    }
}