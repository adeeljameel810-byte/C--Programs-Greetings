#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;        // Account holder name
    int accountNumber;  // Unique account number
    float balance;      // Current balance in account

public:
    // Function to set initial account details
    void setData() {
        cout << "Enter account holder name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> accountNumber;
        balance = 0;   // Starting balance is zero
    }

    // Function to deposit money
    void deposit(float amount) {
        balance += amount;   // Add amount to balance
        cout << "Amount deposited successfully.\n";
    }

    // Function to withdraw money
    void withdraw(float amount) {
        // Check if balance is enough for withdrawal
        if (amount > balance) {
            cout << "Error! Not enough balance.\n";
        } 
        else {
            balance -= amount; // Subtract amount from balance
            cout << "Withdrawal successful.\n";
        }
    }

    // Function to show current balance
    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.setData();

    int choice;
    float amount;

    // Menu will repeat until user selects option 4 (Exit)
    do {
        cout << "\n==== BANK MENU ====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
        } 
        else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
        } 
        else if (choice == 3) {
            account.checkBalance();
        } 
        else if (choice == 4) {
            cout << "Exiting... Thank you!\n";
        } 
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);   // Repeat menu until exit selected

    return 0;
}
