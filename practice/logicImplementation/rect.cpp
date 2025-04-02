//  area of rectangle

#include<iostream>
using namespace std;

class Area{
    public:

    int area ,length, breadth;

    // getter and setter
    void getter(int x, int y){
        length = x;
        breadth = y;
    }

    void calculate();//{
    //     area = length*breadth; 
    // }

};

void Area::calculate(){
    area = length*breadth; 
}

int main(){
    // make an called rectangle
    // now rectangle has l and b
    Area rect;
    rect.getter(8,7);
    rect.calculate();   // area 56
    cout << rect.area<<endl;

    // rect.area = 0;
}

// rect{
//     public:

//     int area ,length, breadth;

//     // getter and setter
//     void getter(int x, int y){
//         length = x;
//         breadth = y;
//     }

//     void calculate(){
//         area = length*breadth; 
//     }
// }