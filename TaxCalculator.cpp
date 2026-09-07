#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const double rate = 0.075;
    double price;
    cout << fixed << setprecision(2);
    cout << "Enter the price of the item: ";
    cin >> price;

    if(price < 0){
        cout << "Don't put a price less than zero!";
        return 0;
    }
    double taxAmount = price * rate;
    double totalAmount = price + taxAmount;

    cout << "Original Price: $" << price <<endl;
    cout << "Sales Tax:  $" << taxAmount << endl;
    cout << "Toatl Cost:  $" << totalAmount << endl;

    return 0;

}