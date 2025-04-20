# include <iostream>
using namespace std;


class Printer {
public:
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }

    void print(double d) {
        cout << "Printing double: " << d << endl;
    }

    
};

int main() {
    Printer p1;
    p1.print(23);
    p1.print(23.2);
}