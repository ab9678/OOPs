# include <iostream>
using namespace std;

class shop{
    string itemCode;
    int price,quantity,total;

    shop(){
        cout << "Price: ";
        cin >> price;

        cout << "Quantity: ";
        cin >> quantity;

        calculate();
    }

    void calculate(){
        total = price * quantity;
        cout << total;
    }

    

};