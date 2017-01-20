#include<iostream>
#include<fstream>
using namespace std;

bool isPrime(int num);

int main()
{
    
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    if(isPrime(num)==true){
        cout << num << " is a prime number." << endl;
    }else{
        cout << num << " is not a prime number." << endl;
    }
    
    return 0;
}
bool isPrime(int input)
{
    if(input < 2){
        return false;
    }
    else if(input == 1 || input == 2 || input == 3)
    {
        return true;
    }
    else
    {
        for(int i = 2; i < input; i++){
            if(input%i == 0){
                return false;
            }
        }
        return true;
    }
}
