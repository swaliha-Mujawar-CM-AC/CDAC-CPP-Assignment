#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int accNum;
    string name;
    double balance;
    // static member - taught around Day 7-8
    static int totalAccounts; 

public:
    // constructor
    BankAccount() {
        accNum = 0;
        name = "None";
        balance = 0.0;
        totalAccounts++; // incrementing total count
    }

    // setters and getters
    void setDetails(int an, string nm, double bal) {
        accNum = an;
        name = nm;
        balance = bal;
    }

    void deposit(double amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposited. New balance: " << balance << endl;
        }
    }

    void withdraw(double amt) {
        if (amt > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amt;
            cout << "Withdrawn. Remaining: " << balance << endl;
        }
    }

    void display() {
        cout << "\n--- Bank Details ---" << endl;
        cout << "Acc No: " << accNum << endl;
        cout << "Name  : " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    // static function to show total accounts
    static void showTotal() {
        cout << "Total accounts created: " << totalAccounts << endl;
    }
};

// initializing static variable
int BankAccount::totalAccounts = 0;

int main() {
    BankAccount b;
    int choice = 0;
    int acc;
    string nm;
    double money;

    cout << "Enter Account Number: ";
    cin >> acc;
    cout << "Enter Name: ";
    cin >> nm;
    cout << "Enter Opening Balance: ";
    cin >> money;
    b.setDetails(acc, nm, money);

    while (choice != 4) {
        cout << "\n1.Deposit 2.Withdraw 3.Display 4.Exit\nChoice: ";
        // buffer fix: checking if input is a valid number
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Enter numbers only!" << endl;
            continue;
        }

        if (choice == 1) {
            cout << "Amount: ";
            cin >> money;
            b.deposit(money);
        } else if (choice == 2) {
            cout << "Amount: ";
            cin >> money;
            b.withdraw(money);
        } else if (choice == 3) {
            b.display();
            BankAccount::showTotal(); // calling static function
        }
    }
    return 0;
}
