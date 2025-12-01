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

int main() {
    string name;
    int accNo;
    double balance;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin  >> accNo;
    cout << "Enter Deposit Amount: ";
    cin >> balance;


    BankAccount user(name, accNo, balance);

    int choice;
    while(true) {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Choose option: ";
        cin >> choice;

        if(choice == 1) {
            double amt;
            cout << "Enter amount: ";
            cin >> amt;
            user.deposit(amt);
        }
        if(choice == 2) {
            double amt;
            cout << "Enter amount: ";
            cin >> amt;
            user.withdraw(amt);
        }
        else if(choice == 3) {
            user.showDetails();
        }
        else if(choice == 4){
            cout << "Thank you for using our bank system!\n";
            break;
        }
        else {
            cout << "Invalid option. try again!\n";
        }

    }

    return 0;
}