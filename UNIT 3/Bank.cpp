#include<iostream>
#include<string>

using namespace std;

class Bank{
    string customer_name;
    string account_number;
    double balance_amount;
public:
    void setCustomerName(string name);
    void setAccountNumber(string acc);
    void setBalance(double amt);
    void withdraw(double amt);
    void deposit(double amt);
    void checkBalance();
};

void Bank::setCustomerName(string name)
{
    customer_name = name;
}
void Bank::setAccountNumber(string acc)
{
    account_number = acc;
}
void Bank::setBalance(double amt=0.0)
{
    balance_amount = amt;
}
void Bank::withdraw(double amount)
{
    if(amount>balance_amount)
    {

    cout << "Insufficient Balance !" << endl;
    return;
    }
    balance_amount = balance_amount - amount;
    cout << "Withdraw Success: Rs. " << amount << endl;
}
void Bank::deposit(double amount)
{
    balance_amount = balance_amount + amount;
    cout << "Deposit Success: Rs. " << amount << endl;
}

void Bank::checkBalance()
{
    cout << "---------Welcome----------" << endl;
    cout << "Name : " << customer_name << endl;
    cout << "Account Number : " << account_number << endl;
    cout << "Balance Amount : Rs. " << balance_amount << endl;
}


int main()
{
    Bank ob;
    double amount;
    ob.setCustomerName("JEEWAN");
    ob.setAccountNumber("154890238660");
    ob.setBalance(123456);
    ob.checkBalance();
    cout<<"Enter the amount you want to withdraw: " <<endl;
    cin>>amount;
    ob.withdraw(amount);
    cout<<"Enter the amount you want to deposit: " <<endl;
    cin>>amount;
    ob.deposit(amount);
    return 0;
}
