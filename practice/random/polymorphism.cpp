# include <iostream>
using namespace std;
class hello{
    string x;
    void greet(){
        cout <<"hello";
    }
    void greet(string a){
        x=a;
        cout <<x;
    }
};
