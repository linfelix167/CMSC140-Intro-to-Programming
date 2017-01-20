#include <iostream>
using namespace std;

int main()
{
    double itemOne = 15.95, itemTwo = 24.95, itemThree = 6.95, itemFour = 12.95, itemFive = 3.95;
    double subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
    double tax = 0.06 * subtotal;
    double total = tax + subtotal;
    
    cout << "Price of item 1 = $" << itemOne << endl;
    cout << "Price of item 2 = $" << itemTwo << endl;
    cout << "Price of item 3 = $" << itemThree << endl;
    cout << "Price of item 4 = $" << itemFour << endl;
    cout << "Price of item 5 = $" << itemFive << endl << "\n";
    cout << "Subtotal = $" << subtotal << endl;
    cout << "Tax = $" << tax << endl;
    cout << "Total = $" << total << endl << endl;
    
    return 0;
}
