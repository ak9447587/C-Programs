#include<iostream>
using namespace std;
int main()
{
    int pin,amount,card_no,attempt;
    float money;
    char conti;
    attempt=1;
    pin=1234;
    card_no=12345;
    money=10000;
    conti='y';

        while(attempt<4 && conti=='y')
        {
            cout<<"Enter your pin : ";
            cin>>pin;
            cout<<endl<<"Enter your card number : ";
            cin>>card_no;
            if((pin==1234) && (card_no==12345))
            {
                cout<<"Enter amount : ";
                cin>>amount;
                if(money>=amount)
                {
                    if((amount%100)==0)
                    {
                        money =money - amount;
                    }
                    else
                    {
                        cout<<"Enter multiples of 100";

                    }
                }
            }
            else
            {
                 cout<<"Please try again";
                 attempt++;
            }
            cout<<endl<<"Do you want to withdraw money again : ";
            cin>>conti;
        }
        cout<<"You have "<<money<<" left";
        return 0;
}

