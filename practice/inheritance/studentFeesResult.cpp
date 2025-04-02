// student class - name roll, fees inherit student and display the receipt, result inherit student and display marks and grade

# include <iostream>
using namespace std;

class student{
    protected:
    string name;
    public:
    int roll;
    student(){
        cout << "Enter name and roll no. ";
        cin >> name;
        cin>>roll;
    }
};

class fees:protected student{
    
    
    int f;
    public:
    fees(){
        cout << "Enter amount: ";
        cin >> f;
        cout <<name<<endl<<roll<<endl<<"Fees paid"<<endl;
    }

};
class result:protected fees{
  
    int marks;
    char grade;
    public:
    result(){
        cout << "Marks: ";
        cin >> marks;
        getgrade();
    }
    void getgrade(){
        if (marks>=90){
            grade='A';
        }
        else if (marks >= 80){
            grade = 'B';
        }
        else if (marks >= 65){
            grade = 'C';
        }
        else if (marks >= 40){
            grade = 'D';
        }else{
            grade = 'F';
        }
        display();
    }

    void display(){
        cout << name<<endl<<roll<<endl<<marks<<endl<<grade;
    }
    
};


int main(){
    result r1;
    
}