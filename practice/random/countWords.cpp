# include <iostream>
using namespace std;

int main(){
    char str[10];
    cin.getline(str,10);
    int i,count=0,flag=0; // denotes that it has encountered letter, 1 denotes in encountered space

    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            cout <<"Flag: "<<flag<<endl;
            if(flag == 0){
                count++;
                cout<<"Flag has become 1"<<endl;
                flag = 1; // got a space
            }
        }
        else{
            flag = 0;
        }
    }

    if(flag == 0){
        count++;
    }

    cout << "Number of words: "<<count<<endl;
}