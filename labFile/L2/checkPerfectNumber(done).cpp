# include <iostream>
using namespace std;

class number{
    int n;
    void check(){
        int i;
        int sum=0;
        for (i=1;i<=n/2;i++){
            if(n%i == 0){

                sum += i;
            }
        }

        if(sum == n){
            cout <<"Perfect Number";
            
        }else{
            cout <<"Not Perfect Number";
        }

    }
    public:
    number(){
        cout <<"Enter the number: ";
        cin >> n;
        check();
    }

};

int main(){
    number n1;
}


// Done!