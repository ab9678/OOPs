# include <iostream>
using namespace std;

// radius 

class Circle{
    int rad, area, peremeter;
    
    public:

    Circle(){
        cin >> rad;
    }

    void Area(){
        area = 3.14*rad*rad;
        cout<< area;
    }

    void Peremeter(){
        peremeter = 2*3.14*rad;
        cout <<peremeter;
    }   

};

int main(){
    Circle c1;
    c1.Area();
    c1.Peremeter();
}