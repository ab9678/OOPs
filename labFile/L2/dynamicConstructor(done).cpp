# include <iostream>
using namespace std;

class A{
    int *a;
    public:
    A(){
        int n;

        cout <<"Enter size: ";
        cin >> n;

        a = new int[n];
    }
};

int main(){
    A a1,a2;
}