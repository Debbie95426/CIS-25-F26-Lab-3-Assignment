#include <iostream>
using namespace std;
int main(){
    int numofPeople;
    int slicesPerPerson;
    int slicesPerPizza;
    cout << "How many people are attending the party?";
    cin >> numofPeople;

    cout << "How many slices are in pizza?";
    cin >> slicesPerPizza;

    cout << "How many slices will each person eat?";
    cin >> slicesPerPerson;
    int slicesPizza = numofPeople * slicesPerPerson;
    int numberPizza = slicesPizza / slicesPerPizza ;
    int x = 0;
    if(slicesPizza % slicesPerPizza == 0){
        numberPizza = x; 
    }else{
        x = numberPizza + 1;
    }
    int y = slicesPizza % x;
    cout << "You will need to order " << x << " pizzas." << endl;
    cout << "There will be " << y << " leftover slices." << endl;

}