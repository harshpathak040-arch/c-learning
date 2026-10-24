#include<iostream>
using namespace std;

class bankAccount{
    private:
    string accountNumber;
    double Balance;

    public :
     bankAccount(string accNum, double InitialBalance){
        accountNumber accNum;
        Balance = InitialBalance;
     }

     //getter
     
     double getBalance() const{
        return Balance;

        // method to deposite money 

        void deposit(double amount){
            if (amount> 0){
                Balance += amount;
                cout<< "deposited:"<<amount<< endl;

            }
            else{
                cout<< "Invalid deposite amount";
            }
        }
        void withdraw(double amount ){
            if(amount>0 && amount <= Balance)
            Balance -= amount;

        }
        else {
            
        }

     }

    
};