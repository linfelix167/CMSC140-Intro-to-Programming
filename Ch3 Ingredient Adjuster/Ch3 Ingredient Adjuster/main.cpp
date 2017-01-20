#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int NumOfCookies;
    double CupsOfSugar = 1.50 / 48;
    double CupOfButter = 1.0 / 48;
    double CupsOfFlour = 2.75 / 48;
    
    cout << "How many cookies do you want to make?\n";
    cin >> NumOfCookies;
    cout << "You need following ingredient:\n";
    cout << setprecision(2) << fixed;
    cout << CupsOfSugar * NumOfCookies << " Cups Of Sugar.\n";
    cout << CupOfButter * NumOfCookies << " Cup Of Butter.\n";
    cout << CupsOfFlour * NumOfCookies<< " Cups Of Flour." << endl;
    
    return 0;
}
