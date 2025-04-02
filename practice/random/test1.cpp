#include<iostream>
#include<string>
using namespace std;
class student{
	protected:string name;
    	int rollno;
    	public:
        student(){
        cout << "Name: ";
        cin >> name;

        cout << "rollno";
        cin >> rollno;
    }
};
class Fees:protected student{
	public:
	int fees;
	void submit(){
		cout<<"enter fees";
		cin>>fees;
		}
		void receipt(){
		cout<<"name "<<name<<endl;
		cout<<"roll no "<<rollno<<endl;
		cout<<"fees paid "<<fees<<endl;
		cout<<"status paid"<<endl;
		}
};
class Result:protected student{
	int marks;
	
	public:void getmarks(){
		cout<<"marks obtained";
		cin>>marks;
		}
		void display(){
		cout<<"name "<<name<<endl;
		cout<<"roll no "<<rollno<<endl;
		if(marks>=60)
		cout<<"A";
		else if(marks<60 && marks>40)
		cout<<"B";
		else
		cout<<"cry bro";
		}
};
int main(){
	Fees F;
	F.submit();
	F.receipt();
	Result R;
	R.getmarks();
	R.display();
}