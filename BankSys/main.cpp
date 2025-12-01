#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        string ownerName;
        int accountNumber;
        double balance;

    public:
    // Constructor
    BankAccount(string name, int accNo, double initialBalance) {
        ownerName = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount){
        balance += amount;
        cout << "Deposit successful! New Balance: " << balance << "\n\n";
    }

    void withdraw(double amount) {
        if(amount > balance) {
            cout << "! Insufficent balance!\n\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful! New Balance: " << balance << "\n\n";
        }
    }

    void showDetails() {
        cout << "-------- Account --------\n";
        cout << "Owner Name: " << ownerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "-----------------------------------\n";

    };
};
