# include <iostream>
using namespace std;
# include <fstream>


int main(){
    ofstream wfile;
    ifstream rfile;

    wfile.open("Hello.txt");
    wfile<<"Yo guys whats up!";

    wfile.close();

    rfile.open("Hello.txt");

    string s;
    while(!rfile.eof()){
        s = rfile.get();
        cout<<s;
    }
    
}