# include <iostream>
using namespace std;

class student{
    public:
    int x;
    student(){
        cout<<"Contructor"<<endl;
    }
    ~student(){
        cout<<"Destructor"<<endl;
    }
};


int main(){
    cout<<"Program start"<<endl;
    static student s1;
    s1.x=0;
    cout<<"Program ends"<<endl;

}