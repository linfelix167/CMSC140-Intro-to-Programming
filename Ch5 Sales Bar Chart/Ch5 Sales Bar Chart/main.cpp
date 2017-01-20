#include<iostream>
using namespace std;

int main()
{
    int sale = 0;
    int store[5];
    
    for(int x = 0; x < 5; x++)
    {
        cout <<"Enter today's sales for store " << x + 1 <<endl;
        cin >> sale;
        store[x] = sale / 100;
    }
    
    cout << "\nSALES BAR CHART\n";
    cout << "(Each * = $100)\n";
    
    for(int z = 0; z < 5; z++)
    {
        cout << "Store "<< z+1 << " : ";
        for(int y = 0; y < store[z]; y++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
