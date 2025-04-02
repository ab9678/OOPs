# include <iostream>
using namespace std;

class greet{
    public:
    string x;

};

class hello:public greet{
    hello(){
        x="hello world";
        cout <<x;
    }
};
