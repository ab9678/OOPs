# include <iostream> 
using namespace std;

class complex{
    int r1, i1, r2, i2;


    public:
    void add(){
        cout << r1+r2<<" "<<i1+i2<<"i"<<endl;
    }
    void subtract(){
        cout << r1-r2<<" "<<i1-i2<<"i"<<endl;
    }

    complex(){
        cout << "Enter the number 1: ";
        cin >> r1;
        cin >> i1;
        cout << "Enter the number 2: ";
        cin >> r2;
        cin >> i2;

    }


};

int main(){
    complex c1;
    c1.add();
    c1.subtract();
}