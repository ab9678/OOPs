# include <iostream>
using namespace std;

class shape{
    virtual void draw()=0;
};

class circle: public shape{
    public:
    void draw(){
        cout<<"Circle";
    }

};


int main(){
    circle c1;
    c1.draw();
}