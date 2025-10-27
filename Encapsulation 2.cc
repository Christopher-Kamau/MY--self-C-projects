#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    void setAccountHolder(string a) {
        accountHolder = a;
    }

    void setBalance(double b) {
        balance = b;
    }

    string getAccountHolder() {
        return accountHolder;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount ban;

    ban.setAccountHolder("Chris");
    ban.setBalance(400000);

    cout << "Account Holder: " << ban.getAccountHolder() << endl;
    cout << "Balance: " << ban.getBalance() << endl;

    return 0;
}
