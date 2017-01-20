#include<iostream>
using namespace std;

int main()
{
    const int people = 7;
    int empId[people] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[people];
    double payRate[people];
    double wages[people];
    
    cout << "We need to know each employee's salary" << endl;
    for(int i = 0; i < people; i++)
    {
        cout << "\nEnter employee #" << empId[i] << " hours: ";
        cin >> hours[i];
        
        while(hours[i]<0)
        {
            cout<<"Error! Hours cannot smaller than 0! Enter again: ";
            cin >> hours[i];
        }
        
        cout <<"\nEnter employee #" << empId[i] << " pay rate: ";
        cin >> payRate[i];
        
        while(payRate[i] < 15.00)
        {
            cout << "Error! Pay rate cannot smaller than 15! Enter again: ";
            cin >> payRate[i];
        }
        
        wages[i] = hours[i]*payRate[i];
    }
    
    cout << "\nInformation is listed below: " << endl;
    cout << "--------------------------------------------------------";
    for(int j = 0; j < people;j++)
    {
        
        cout << "\nEmployee #" << empId[j] << "\t\tGross Wages: "<< wages[j] << endl;
    }
    
    cout << endl;
    
    return 0;
}
