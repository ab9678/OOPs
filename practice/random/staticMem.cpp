# include <iostream>
using namespace std;

class A{
    public:
    int xyz;
    static int x;
    static void getData(){
        cout <<x<<endl;
        // cout <<xyz;
    }
    // can only access static members
    // int r(){
    //     cout<<xyz;
    // }
};
int A::x=0;

int main(){
    A o1,o2;
    // A::getData();
    // o1.getData();
    // o1.x=7;
    // A::getData();
    // o1.getData();
    // o2.getData();
}