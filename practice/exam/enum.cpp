# include <iostream>
using namespace std;

enum number{
    val1 = 0,
    val2 = 1
};

int main(){
    number n;

    n=val2;

    cout <<n<<endl; // it prints the value assigned to val2;
}