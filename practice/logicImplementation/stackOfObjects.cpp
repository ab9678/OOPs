# include <iostream> 
using namespace std;
int top=-1;
class Object{
    public:
    int x;
    Object(){
        x=0;
    }
};

void push(Object **ar){
    top++;
    ar[top] = new Object;
    cout<<"Enter Number: ";
    cin>>ar[top]->x;
}

void pop(Object **ar){
    top--;
}

void display(Object **ar){
    int i;
    cout <<"Displaying..."<<endl;
    for (i=0;i<=top;i++){
        cout<<ar[i]->x<<endl;
    }
}

int main(){
    Object *ar[10];
    int choice=0;
    while(1){
        cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Display"<<endl;

        cin >> choice;

        if (choice == 1){
            push(ar);
        }
        else if (choice == 2){
            pop(ar);
        }
        else if (choice == 3){
            display(ar);
        }
    }
}