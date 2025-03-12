# include <iostream>
using namespace std;

class matrix{
    int mat[3][3];
    int sum;
    public:
    matrix(){
        int i,j;
        for(i=0;i<3;i++){
            for (j=0;j<3;j++){
                cin>> mat[i][j];
            }
        }

        for(i=0;i<3;i++){
            for (j=0;j<3;j++){
                cout<< mat[i][j]<<"\t";
            }
            cout<<endl;
        }      
    }

    void calculate(){
        int i,j;
        sum=0;
        for(i=0;i<3;i++){
            for(j=i;j<3;j++){
                sum+=mat[i][j];
                break;
            }
        }

        cout<<sum<<endl;
    }
};

int main(){
    matrix m1;
    m1.calculate();
}