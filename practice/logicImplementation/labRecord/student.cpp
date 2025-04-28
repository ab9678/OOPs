# include <iostream>
using namespace std;

class student {
    int roll;
    string name;
    int marks[5];
    public:
    
    void getData(); 
    void display();
};

inline void student::display(){
    
    cout << name<<endl;
    cout << roll<<endl;
    cout <<"MARKS:-"<<endl;
    for(int i=0;i<5;i++){
        cout <<"Sub "<<i+1<<": ";
        cout << marks[i];
        cout <<endl;
    }
}
inline void student::getData(){
    cout << "Name: ";
    cin >>name;


    cout << "Roll: ";
    cin >> roll;

    cout << "Enter Marks: "<<endl;
    for(int i=0;i<5;i++){
        cout <<"Sub "<<i+1<<": ";
        cin >> marks[i];
        cout <<endl;
    }
    display();
}

int main(){
    student s1;
    s1.getData();
    
}