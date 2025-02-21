# include <iostream>
using namespace std;

class arrayC{

    public:
    int n,count;
    int *a;

    arrayC(){
        n=0;
    }
    arrayC(int x){
        n=x;
        count=0;
        a = new int[n];
        getData();
        evenOdd();
    }

    void getData();
    void evenOdd();

};

void arrayC::getData(){
    int i;
    for (i=0;i<n;i++){
        cin >> a[i];
        // a[i]=i+1;
    }
}

void arrayC::evenOdd(){
    int i;
    for (i=0;i<n;i++){
        if(a[i]%2==0){
            count++;
        }
    }

    cout <<"Even: " <<count;
    cout <<" Odd: " <<n-count;
}

int main(){
    arrayC obj(5);
    
}


