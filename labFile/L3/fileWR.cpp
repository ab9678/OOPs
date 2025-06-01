# include <iostream>
# include <string>
using namespace std;
# include <fstream>


int main(){
    ofstream ofile("abc.txt");
    
    ofile<<"Hello"<<endl;

    ofile.close();

    ifstream ifile("abc.txt");

    string data;
    
    // ifile.open("abc.txt");

    while(getline(ifile, data)){
        cout << data << endl;
    }
}