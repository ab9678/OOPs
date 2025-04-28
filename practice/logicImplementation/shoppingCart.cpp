# include<iostream>
using namespace std;

class Product{
    public:
    string name;
    int price, quantity;
};

class cartItem: public Product{
    int total;
    cartItem(){
        cout << "Name: ";
        cin >> name;
        cout << "Price: ";
        cin >> price;
        cout << "quantity";
        cin >> quantity;

        total = price*quantity;
    }
};

class shoppingCart{
    cartItem o1,o2;

};
int main(){

}