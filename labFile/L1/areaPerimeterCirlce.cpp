# include <iostream>
using namespace std;

class circle{

    int radius;
    float area;

    void Area(){
        area = 3.14*radius*radius;
        cout << "Area of the circle; "<<area;
    }

    public:
    circle(){
        cout << "Enter radius: ";
        cin >> radius;
        Area();
    }

};

int main(){
    circle c1;
}