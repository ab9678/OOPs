# include <iostream>
using namespace std;
/*
       *
      **
     ***
    ****
*/
int main(){

    int row;
    cout << "Enter row";
    cin >> row;
    
    int blank;

    int i = row;
    int j,star=0;
    int x=row;

    while(i>0){
        blank=row-1;
        j=blank;
        while(blank>0){
            cout<< " ";
            blank--;
        }

        star = x-j;
        // cout<<"j="<<j<<"star="<<star;
        while(star>0){
            cout<<"*";
            star--;
        }
        cout<<endl;
        i--;
        row--;
    }

}