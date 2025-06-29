#include<iostream>
#include<string>
using namespace std;

class Bank {
    string customer_name;
    string account_number;
    double balance_amount;
public:
    Bank(string name, string acc, double balance) {
        customer_name = name;
        account_number = acc;
        balance_amount = balance;
    }

    void withdraw(double amt);
    void deposit(double amt);
    void checkBalance();
};

void Bank::withdraw(double amount) {
    if (amount > balance_amount) {
        cout << "Insufficient Balance! Cannot withdraw Rs. " << amount << endl;
        cout << "Remaining Balance: Rs. " << balance_amount << endl;
        return;
    }
    balance_amount -= amount;
    cout << "Withdraw Success: Rs. " << amount << endl;
    cout << "Remaining Balance: Rs. " << balance_amount << endl;
}

void Bank::deposit(double amount) {
    balance_amount += amount;
    cout << "Deposit Success: Rs. " << amount << endl;
    cout << "Updated Balance: Rs. " << balance_amount << endl;
}

void Bank::checkBalance() {
    cout << "\n---------Account Summary----------" << endl;
    cout << "Name: " << customer_name << endl;
    cout << "Account Number: " << account_number << endl;
    cout << "Balance Amount: Rs. " << balance_amount << endl;
}

int main() {
    string name, acc;
    double balance, amount;
    cout << "Enter Customer Name: ";
    getline(cin, name);
    cout << "Enter Account Number: ";
    getline(cin, acc);
    cout << "Enter Initial Balance: Rs. ";
    cin >> balance;
    Bank ob(name, acc, balance);
    ob.checkBalance();
    cout << "\nEnter the amount you want to withdraw: ";
    cin >> amount;
    ob.withdraw(amount);
    cout << "\nEnter the amount you want to deposit: ";
    cin >> amount;
    ob.deposit(amount);
    return 0;
}
