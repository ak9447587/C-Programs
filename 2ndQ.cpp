#include <iostream>

using namespace std;
class account
{
    int amount,accno,pin,wthdramount,depamount;
    char name[15];
public:
    void get()
    {
        cout<<"enter details"<<endl;
        cout<<"\tEnter Name : ";
        cin>>name;
        cout<<"\tEnter Acc. No : ";
        cin>>accno;
        cout<<"\tEnter amount : ";
        cin>>amount;


    }
    void show()
    {
    cout<<"\n account information"<<endl;
    cout<<accno<<endl;
    cout<<"\t"<<name<<endl;
    cout<<"\t"<<amount<<endl;


    }
    void chckbalance()
    {

    cout<<"enter your account no : ";
    cin>> accno;
    cout<< "this account has amount of rs : "<<amount ;

    }
    void withdrawal()
    {
        cout<<"enter your account number"<<endl;
        cin>>accno;
        cout<<"enter your pin"<<endl;
        cin>>pin;
        cout<<"enter the amount you want to withdraw"<<endl;
        cin>>wthdramount;
        if(amount>=wthdramount)
        {
            cout<<"your amount is withdrawing"<<endl;
            amount=amount-wthdramount;
            cout<<" your remaining balance is"<<amount<<endl;
        }
        else
        {
            cout<<"you don not have sufficient balance"<<endl;
        }

    }
    void deposit()
    {
        cout<<"enter your account"<<endl;
        cin>>accno;
        cout<<" enter the amount you want to deposit"<<endl;
        cin>>depamount;
        amount=amount+depamount;
        cout<<" now the balance in your account no is"<<amount;

    }



};

int main()
{
    account obj;
    int n,i;
    obj.get();
    obj.show();
    obj.chckbalance();
    obj.withdrawal();
    obj.deposit();

return 0;
}
