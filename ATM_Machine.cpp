#include<bits/stdc++.h>
using namespace std;
class ATM{
    private:
        int balance;
    public:
        ATM(int bal){
            balance=bal;
        }
        int getBalance(){
            return balance;
        }
        bool withDraw(int amount){
            if(amount > balance){
                return false;
            }
            balance=balance-amount;
            return true;
        }
        void deposit(int amount){
            balance=balance+amount;
        }
};
int main()
{
    ATM atm(1000);
    string name;
    cout<<"Enter the name of Customer: "<<endl;
    cin>>name;
    cout<<"Hi "<<name<<" Welcome for HDFC ATM "<<endl;
    cout<<"Your Initial Balance is: "<<atm.getBalance()<<endl;
    int choice,amount;
    char op;
    bool success;
    cout<<"1. View Balance"<<endl;
    cout<<"2. Cash Withdraw"<<endl;
    cout<<"3. Cash Deposit"<<endl;
    do{
        cout<<"Enter the choice"<<endl;
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Your Balance :"<<atm.getBalance()<<endl;
            break;
        case 2:
            cout<<"Enter the amount to Withdraw"<<endl;
            cin>>amount;
            success=atm.withDraw(amount);
            if(success){
                cout<<"Withdraw Successfull..."<<endl;
            }
            else{
                cout<<"Insufficient amount, Withdraw Unsuccessfull...."<<endl;
            }
            break;
        case 3:
            cout<<"Enter the amount to Deposit: "<<endl;
            cin>>amount;
            atm.deposit(amount);
            cout<<"Deposit Successfull...";
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
        cout<<"Do you want to Try Another Transaction [Yes/No]: "<<endl;
        cin>>op;
    }while(op == 'y' || op=='Y');
    cout<<"Thank You "+name+" for using HDFC ATM"<<endl;
    cout<<"Visit Again......";
    return 0;
}
