# include <iostream>
using namespace std;
class number{

    public:
    int num;
    number(){
        cin >> num;
    }

    void decrease(){
        num --;
        // cout << num<<endl;
        if (num < 0){
            throw underflow_error("Too low");
        }
    }

};

int main(){
    number n1;

    try
    {
        n1.decrease();
    }
    catch(const underflow_error& e)
    {
        cout<< e.what() << '\n';
    }
    
}