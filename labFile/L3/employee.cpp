# include <iostream>
using namespace std;

class employee{
    protected:
    int eid;
    string emptype;

    employee(int eid, string emptype){
        this->eid = eid;
        this->emptype = emptype;
    }
};

class permanent: public employee{
    int hra, basic, da;
    public:
    permanent(int eid, int basic, int hra, int da):employee(eid, "Permanent"){
        this->hra = hra;
        this->basic = basic;
        this->da = da;
    }
    void display(){
        cout<<"Employee ID: "<<eid<<endl;
        cout<<"Employee Type: "<<emptype<<endl;
        cout<<"Salary: "<<(basic + hra + da)<<endl;
    }
};

class contractual: public employee{

    int amount;

    public:

    contractual(int eid, int amount):employee(eid, "Temporary"){
        this->amount = amount;
    }

    void display(){
        cout<<"Employee ID: "<<eid<<endl;
        cout<<"Employee Type: "<<emptype<<endl;
        cout<<"Salary: "<<amount<<endl;
    }

};

int main(){

    permanent p1(21,50000,9000,3000);
    contractual c1(22,10000);

    p1.display();
    c1.display();


}