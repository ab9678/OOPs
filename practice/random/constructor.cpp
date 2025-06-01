# include <iostream>
using namespace std;

class abc{
    int x;
    int *a;
    public:
    abc(){};//dummy

    abc(){//default
        cout <<"hello";
    }

    abc(string h){//parameterised
        cout<<h;
    }

    abc(int a=0){
        x=a;
    }

    abc(int n){
        a = new int[n];
    }
};

int main(){
    
}