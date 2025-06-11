# include <iostream>
using namespace std;

class Array{
    int *a;
    int n;
    int l,s;
    public:
    Array(){
        
        cout << "Enter size: ";
        cin >> n;

        a = new int [n];
    }

    void get(){
        for(int i=0;i<n; i++){
            cin >> a[i];
        }
    }

    void largest(){
        l=a[0];
        for (int i=0;i<n;i++){
            if (a[i]>l){
                l = a[i];
            }
        }
    }
    void smallest(){
        s=a[0];

        for (int i=0;i<n;i++){
            if (a[i]<s){
                s = a[i];
            }
        }
    }

    void sum(){
        cout << l+s<< endl;
    }
};


int main(){

    Array a1;

    a1.get();
    a1.largest();
    a1.smallest();
    cout << "Sum of largest and smallest element is: ";
    a1.sum();
}