# include <iostream>
using namespace std;

class student{
    public:
    int x;
    int y;


    student(){
        cin >> x;
    };
    student(int a,student &o){
        x = o.x;
        y=a;
    }

};

int main(){

    student s1;
    student s2(23,s1);
    cout<<"x="<<s2.x<<endl<<"y="<<s2.y<<endl;
}