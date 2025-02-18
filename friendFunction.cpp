# include <iostream>
using namespace std;
class secondNum;    // this is a forward declaration of classes

/* 
    friend function should have the classes available at the first instance of its declaration otherwise the second class will become unavailable
*/

class firstNum{
  
    int num1;

    public:
    firstNum(int x){
        num1=x;
    }
    friend int mean(firstNum, secondNum);

};

class secondNum{
   
    int num2;

    public:
    
    secondNum(int x){
        num2 = x;
    }
    friend int mean(firstNum, secondNum);
};

int mean(firstNum a, secondNum b ){
    cout << (b.num2+a.num1)/2<<endl;
    return 0;
}

int main(){
    firstNum o1(5);
    secondNum o2(4);

    mean(o1,o2);
}