#include<iostream>
using namespace std;
class Matrix{

    int a[3][3];
    public:

    void input(){
        cout<<"Enter elements:\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
              cin>>a[i][j];
    }

    void show(){
        cout<<"Elements:\n";
        for(int i=0;i<3;i++)
          for(int j=0;j<3;j++)
             cout<<a[i][j]<<endl;
    }

    Matrix operator+(Matrix m){
        Matrix temp;
        for(int i=0;i<3;i++)
          for(int j=0;j<3;j++)
            temp.a[i][j]=a[i][j]+m.a[i][j];
        return temp;
    }
};

int main(){
    
    Matrix M1,M2,M3;
    cout<<"Matrix 1:\n";
    M1.input();
    cout<<"Matrix 2:\n";
    M2.input();
    M3=M1+M2;
    cout<<"Sum: "<<endl;
    M3.show();
}