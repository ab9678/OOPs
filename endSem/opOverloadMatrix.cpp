# include <iostream>
using namespace std;

class number{

    int a[2][2];
 
    public:
    number(){
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                a[i][j]=0;
            }
        }
        
    };
    number(int x){
        cout << "Enter Elements: "<<endl;
        
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
        
    }

    number operator + (number obj){
        number temp;
        for(int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                temp.a[i][j] = a[i][j]+obj.a[i][j];
            }
        }
        return temp;
    }

    void show(){
        for(int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

};

int main(){
    number n1(0);
    number n2(0);

    number n3 = n2+n1;
    n3.show();

 
}