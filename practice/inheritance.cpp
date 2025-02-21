# include <iostream>
# include <string>
using namespace std;

class A{
    // int x;
    public:
    void hello(){
        cout<<"hello";

    }
    void hello (string name){
        cout <<name;
        
    }
    void hello (string name1,string name2){
        cout <<name1<<name2;
    }
};

class B:protected A{
    
};

int main(){
    A objects[5]; //[o1,o2,o3,o4,o5]  
    int i;
    for(i=0;i<5;i++){
        objects[i].hello("a");
    }
}