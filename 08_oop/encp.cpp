#include <iostream>

using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double initialBalance){
            accountNumber = accNum;
            balance = initialBalance;
        }

      

};

int main(){
    BankAccount myAccount("1229988", 500);

  

    return 0;
}