# include <iostream>
using namespace std;

class numbers{
    int num1,num2,res;
    char op;
    
    void calculate(){
        
        try{
            if (op == '+'){
                res = num1 + num2;
            } else if (op == '-') {
                res = num1 - num2;
            } else if (op == '*') {
                res = num1 * num2;
            } else if (op == '/') {
                if (num2 == 0) {
                    throw runtime_error("Division by zero is not allowed.\n");
                }
                res = num1 / num2;
            } else {
                throw invalid_argument("Invalid operator.\n");
            }
                
            cout<<res<<endl;         
        }
        catch(const exception &error){
            cout<<error.what();
        }

    }

    public:
    
    numbers(){
        cin >> num1>>op>>num2;
        calculate();
    }
};

int main(){
    numbers n1;
}