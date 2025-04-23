# include <iostream>
using namespace std;

class numbers{
    int num;

    void check(){
        try
        {
            if(num<0){
                throw("Negative Number");
            }
            else if (num>0){
                throw("Positive Number");
            }
            else{
                throw("Zero");
            }
        }
        catch(const exception& e)
        {
            cout<< e.what() <<endl;
        }

    }
    public:
    numbers(){
        cin >> num;
        check();
    }
};

int main(){
    numbers n1;
}