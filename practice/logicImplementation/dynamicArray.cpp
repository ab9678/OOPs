# include <iostream>
using namespace std;

class Array{

    int *a,n;
    public:
    Array(){
        cout << "Enter size: ";
        cin>>n;
        a = new int [n];
    }

    void get(){

        // |2|3|4|

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

    }

    void display(){
        for(int i=0;i<n;i++){
            cout <<" "<< a[i];
        }
    }
};

int main(){
    Array a1;
    a1.get();
    a1.display();

}