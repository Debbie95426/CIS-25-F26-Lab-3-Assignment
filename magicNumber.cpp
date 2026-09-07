#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Please enter your favorite number: " << endl;
    cin >> x;
    int newNumber = (((x * 2) + 10) / 2) - x;
    cout << "Your magic number is... " << newNumber << "!" << endl;
}