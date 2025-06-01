# include <iostream>
# include <string>
using namespace std;

class original{
    int roll;
    string name;

    friend class friendClass;
};
class friendClass{
    public:
    
    friendClass(original obj){
        cout << "\nName: ";
        cin >> obj.name;
        cout << "\nRoll: ";
        cin >> obj.roll;
        display(obj);
    }
    void display(original obj){
        int i;
        for (i=0;i<100;i++){
            cout<<"_";
        }
        cout <<"\nName: "<<obj.name<<endl;
        cout <<"Roll Number: "<<obj.roll<<endl;

    }
};

class newClass{
    
};


int main(){
    original student1;
    friendClass data(student1);
}