# include <iostream>
using namespace std;

class Array{
    public:
    int a[5]={0};

    void insert(){
        int n;
        cout << "Enter address: ";
        cin >> n;

        try{
            if(n>5){
                throw runtime_error("Index out of bounds");
            }else{
                cin >> a[n];
            } 

        }
        catch (const exception &e){
            cout << e.what();
        }
        
    }

};

int main(){
    Array a1;

    // try{
    //     a1.insert();
    // }
    // catch (const exception &e){
    //     cout <<e.what();
    // }
    a1.insert();
}