# include <iostream>
using namespace std;

void change(int &l, int &b){
    l=20;
    b=9;
    
}

int main(){
    int l,b;
    int area;
    l=9;
    b=8;
    area = l*b;
    cout<<area<<endl;
    // after change calculate area again
    change(l,b);
    area = l*b;
    cout<<area<<endl;
}

