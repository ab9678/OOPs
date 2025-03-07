# include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number of bit: ";
    cin >> n;
    int n1[n],n2[n],res[n+1]={0}; // n+1 because 4+5=9 where 9 is 4 bit and 4 and 5 are 3 bits, similarly adding two n bit binary numbers can give a n+1 bit binary number
    int sum=0,carry=0;
    int i,resIndex=-1;
    for (i=0;i<n;i++){
        cin >> n1[i];
    }
    for (i=0;i<n;i++){
        cin >> n2[i];
    }
    for (i=n-1;i>=0;i--){
        sum = n1[i]+n2[i];
        
        if(sum+carry>2){
            carry = 1;
            resIndex++;
            res[resIndex]=1;       
        }
        else if(sum+carry>1){
            carry=1;
            resIndex++;
            res[resIndex]=0;
        }
        else if (sum+carry==0){
            carry = 0;
            resIndex++;
            res[resIndex]= 0;
        }
        else if (sum+carry == 1){
            carry =0;
            resIndex++;
            res[resIndex]=1;
        }
    }
    if(carry==1){
        resIndex++;
        res[resIndex]=1;
        carry=0;
    }
    for(i=n;i>=0;i--){
        cout<<res[i];
    }
    cout<< endl;   
}