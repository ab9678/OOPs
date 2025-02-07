# include <iostream>

using namespace std;

class a
{
private:
    int a;
public:
    int nigga();
};

int a::nigga(){
    cout << "hello, world\n";
    return 0;
}

int main(){

    a greet;

    greet.nigga();

    return 0;
}