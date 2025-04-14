# include <iostream>
using namespace std;

class train{

    static int firstC,secondC,thirdC;

    train(){
        cout<<"Enter first class";
        cin >> firstC;
        cout <<"Enter second class";
        cin >> secondC;
        cout <<"Enter third class";
        cin >> thirdC;
    }

    void display(){
        cout <<"First class: "<<firstC<<endl<<"Second class: "<<secondC<<endl<<"Third class: "<<thirdC<<endl;
    }


};

int train::firstC = 0;
int train::secondC = 0;
int train::thirdC = 0;

class reservation:public train{

    int book;

    


};



int main(){

}