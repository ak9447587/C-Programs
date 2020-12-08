#include<iostream>
using namespace std;
class Extra
{
protected:
    int balance,account;
    char name[10];

public:
    Extra()
    {
        balance=50000;

    }
    void user()
    {
        cout<<"Enter user name : ";
        cin>>name;
        cout<<endl<<"Acc. No. : ";
        cin>>account;
    }

};
class PMFund
{
  protected:
        int fund;
public:
    void get_fund()
    {
        fund=2000;
    }
};
class Total:public Extra,public PMFund
{
 int intersst,anually;
 public:
     void total_money()
    {
        cout<<"\nUser name is : "<<name;
        cout<<"\n His account number is : "<<account;
        intersst=(balance*5)/100;

        balance=balance+intersst;
        anually=(12*fund)+balance;

        cout<<"\nAnnual Money : "<<anually;
    }
};
int main()
{
        Extra e;
        Total t;
        t.user();
        t.get_fund();
        t.total_money();
    return 0;
}
