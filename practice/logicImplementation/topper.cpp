// Write a program to find the topper of the class of 5 students based on marks in 3 subjects. Display the Student details.

# include <iostream>
# include <string>
using namespace std;
class student{
    public:
    string name;
    int m1,m2,m3;
    int total;
    // student(){};
    student(){
        cout<<"Name: ";
        cin>>name;
        cout<<endl<<"Marks: ";
        cin>>m1>>m2>>m3;
        calculateTotal();
    }
    void calculateTotal(){
        total = m1+m2+m3;
    }
};

int main(){

    student s[5];
    int i;

    for(i=0;i<5;i++){
        cout<<s[i].name<<endl<<s[i].total<<endl;
    }

    int highest=0,index;

    for (i=0;i<5;i++){
        if (s[i].total>highest){
            highest = s[i].total;
            index=i;
        }
    }

    cout<<endl<<"Topper is: "<<s[index].name<<endl<<s[index].total<<endl;


}