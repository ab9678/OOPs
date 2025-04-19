# include <iostream>
using namespace std;
class school{
    protected:
    int standard;
};
class classroom:protected school{
    protected:
    string subject;
};
class student:protected classroom{
    string name;
    int roll;
    public:
    student(){
        cout<< "Name: ";
        cin>> name;
        cout << "Roll: ";
        cin >> roll;
        cout <<"standard";
        cin>> standard;
        cout <<"Subject: ";
        cin >> subject;
    }

    void display(){
        cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl<<"Standard: "<<standard<<endl<<"Subject: "<<subject<<endl;
    }
};

int main(){
    student s1;
    s1.display();
}