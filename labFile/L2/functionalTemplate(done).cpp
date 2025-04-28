# include <iostream>
using namespace std;
template <typename T>

T sum (T num){
    return num+2;
}

int main(){
    cout << sum <int>(23);
}

