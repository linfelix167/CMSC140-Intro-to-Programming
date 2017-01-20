#include<iostream>
#include<fstream>
using namespace std;

bool isPrime(int num);

int main()
{
    int num;
    ofstream outFile;
    outFile.open("PrimeNumberList.txt");
    
    cout << "The prime number from 1 through 100: " << endl;
    for(int i =1; i <= 100; i++)
    {
        if(isPrime(i))
        {
            outFile <<i<<endl;
        }
    }
    
    ifstream inFile;
    inFile.open("PrimeNumberList.txt");
    cout << "Reading from the file" << endl;
    
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num<< endl;
    inFile >> num;
    cout << num << endl;
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
