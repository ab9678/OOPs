# include <iostream>
using namespace std;

template <class T>

class number{
    T num;
    public:
    
    number(T n){
        num = n;
    }

    void display(){
        cout << num;
    }
};


int main(){
    number <int>n(23);
    n.display();
}
