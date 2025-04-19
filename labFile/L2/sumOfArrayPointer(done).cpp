# include <iostream>
using namespace std;

class Array{

    int n,sum, *array;
public:
    Array(){
        cout<<"Enter size: ";
        cin>>n;
        array = new int[n];

        getdata();
    }

    void getdata(){
        cout <<"Enter elements of the Array: "<<endl;
        int i;
        for(i=0;i<n;i++){
            cin >> array[i];
        }
    }

    void Sum(){
        int i;
        sum=0;
        for(i=0;i<n;i++){
            sum+=array[i];
        }

        cout <<"Sum: "<<sum<<endl;
    }
};


int main(){
    Array a1;
    a1.Sum();
}