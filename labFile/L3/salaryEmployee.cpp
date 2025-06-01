# include <iostream>
using namespace std;
class employee{

    int sal;
    public:
    employee(){
        cin >> sal;
    }

   friend void increment(employee &obj, int s); 

    void display(){
        cout<<"Salary: "<<sal;
    }

};

void increment(employee &obj, int s){
    obj.sal += s;
}

int main(){
    employee e;
    increment(e,2000);
    e.display();
}