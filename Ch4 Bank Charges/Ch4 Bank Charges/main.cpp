#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int checks;
    double balance, fee;
    
    cout << "Enter your balance.\n";
    cin >> balance;
    
    if(balance <0){
        cout << "Account is overdrawn!" <<endl;
    }
    
    if(balance < 400 && balance >=0){
        cout << "How many checks do you have?\n";
        cin >> checks;
        if(checks >= 0 && checks < 20){
            fee = 10 + 15 + checks * 0.01;
            cout << "Bank Service charges for the month is $"<< fee << endl;
        }else if(checks >= 20 && checks <= 39){
            fee = 10 + 15 + checks * 0.08;
            cout << "Bank Service charges for the month is $"<< fee << endl;
        }else if(checks >= 40 && checks <=59){
            fee = 10 + 15 + checks * 0.06;
            cout << "Bank Service charges for the month is $"<< fee << endl;
        }else if(checks >= 60){
            fee = 10 + 15 + checks * 0.04;
            cout << " Bank Service charges for the month is $"<< fee << endl;
        }
    }
    if(balance >= 400){
        cout << "How many checks do you have?\n";
        cin >> checks;
        if(checks >= 0 && checks < 20){
            fee = 10 + checks * 0.01;
            cout << "Bank Service charges for the month is $"<< fee << endl;
        }else if(checks >= 20 && checks <= 39){
            fee = 10 + checks * 0.08;
            cout << "Bank Service charges for the month is $"<< fee << endl;
        }else if(checks >= 40 && checks <=59){
            fee = 10 + checks * 0.06;
            cout << "Bank Service charges for the month is $"<< fee << endl;
        }else if(checks >= 60){
            fee = 10 + checks * 0.04;
            cout << "Bank Service charges for the month is $"<< fee << endl;
        }
    }
    
    return 0;
}
