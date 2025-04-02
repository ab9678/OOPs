# include <iostream>
using namespace std;


class Book{
    public:
    string name;
    int pgNo;
    Book(string name, int pgNo){
        this->name = name;
        this->pgNo = pgNo;
    }

    virtual void displayDetails() = 0;
};

class PrintedBook:public Book{
    public:
    int weight;
    string type;

    PrintedBook(string name, int pgNo, int weight):Book(name,pgNo){
        this->weight = weight;
        type = "Paperback";
    }

    void displayDetails() override{
        cout<<"Book: "<<name<<endl;
        cout << "Type: "<<type<<endl;
        cout<<"Number of pages: "<<pgNo<<endl;
        cout<<"Weight: "<<weight<<"g"<<endl;
    }
};

class Ebook:public Book{
    public:
    double fileSize;
    string type;
    Ebook(string name, int pgNo, double fileSize):Book(name,pgNo){
        this->fileSize = fileSize;
        type = "Ebook";
    }

    void displayDetails() override{
        cout<<"Book: "<<name<<endl;
        cout << "Type: "<<type<<endl;
        cout<<"Number of pages: "<<pgNo<<endl;
        cout<<"File Size: "<<fileSize<<"mb"<<endl; 
    }
};

int main(){
    Book* b[2];

    string name;
    int pg,weight;
    double filesize;
    int i;
    string type;
    for (i=0;i<2;i++){
        cout << "Book type?: ";
        
        getline(cin,type);
        if(type == "paper"){
            cout << "Name: ";
            
            getline(cin,name);
            cout << "Pages: ";
            cin>>pg;
            cout<<"Weight: ";
            cin >>weight;
        
            b[i] = new PrintedBook(name,pg,weight);
        }
        else if (type == "ebook"){
            cout << "Name: ";
            
            getline(cin,name);
            cout << "Pages: ";
            cin>>pg;
            cout<<"File Size: ";
            cin >>filesize;

            b[i] = new Ebook(name,pg,filesize);
        }
        cin.ignore();
    }

    cout<<endl<<"BOOKS-------------\n\n";

    for(i=0;i<2;i++){
        b[i]->displayDetails();
        cout<<endl;
    }
}