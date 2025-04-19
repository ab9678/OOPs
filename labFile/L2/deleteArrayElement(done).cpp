// shift the elements and delete
#include <iostream>

using namespace std;

class Array{
    int *a, size;

    void delete_element(){
        int pos;
        cout <<"Position: "<<endl;
        cin >>pos;

        for (int i=pos ; i<size-1; i++){
            a[i] = a[i+1];
        }

        size--;
    }

    void display(){
        for (int i=0 ; i<size ; i++){
            cout <<a[i]<<"\t";
        }
        cout <<endl;
    }

    public:
    Array(){
        int i;
        cout <<"Enter size: "<<endl;
        cin >> size;
        a = new int [size];
        cout <<"Enter elements: "<<endl;    
        for (i=0;i<size;i++){
            cin>>a[i];
        }

        delete_element();
        display();
    }   
};

int main(){
    Array a1;

}

// Done!