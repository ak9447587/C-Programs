// Banking Transaction Operations

#include<iostream>              // inlcuding Header file
using namespace std;
class Banking                   //Declaring Banking class
{
    int money,amount;           //Private data members
    char choice,check;
public:                         //Public access sepecifier
    Banking()                   //Default constructor for setting initial money inside the bank
    {
        money=700000;
    }
    void with_draw()            //defining with_draw function for withdrawing money from bank account.
    {

        do
        {
            cout<<"\n**********************************************************************\n\n";
            cout<<"Enter amount : ";
            cin>>amount;
            if(amount<money)
            {
                money=money-amount;
            }
            else
            {
                cout<<"You don't have enough money\n";
            }
            cout<<"\nTo check available balance, Press 'y'/'n' : ";
            cin>>check;
            if(check=='y')
                check_balance();                // calling check_balance() function for displaying
                                                // balance on 'y' yes choice
            cout<<"\nDo you want to withdraw money again... press 'y'/'n': ";
            cin>>choice;
        }while(choice=='y');
    }
    void deposit()                              //defining deposit() function for deposit money
    {                                           // in the bank
        do
        {
            cout<<"\n**********************************************************************\n\n";
            cout<<"Enter amount : ";
            cin>>amount;
            money=money+amount;                 //money will get added in current balance
            cout<<"\nTo check available balance, Press 'y'/'n' : ";
            cin>>check;
            if(check=='y')
            {
                check_balance();                //on yes, check_balance() fun will be called
            }
            cout<<"Do you want to add more money again... Press 'y'/'n' : ";
            cin>>choice;

        }while(choice=='y');
     }
    void check_balance()                        // Defining check_balance function for balance checking
    {
            cout<<"\n*****************************************\n";
            cout<<"Available Balance : "<<money<<endl;
            cout<<"\n*****************************************\n";
    }
};
int main()           //main function
{
    Banking b;      // Creating object as "b" of class "Banking"
    int option;
    char ch;
    cout<<"********************************************** National Bank **********************************************\n";
    do
    {

        cout<<endl<<"\t\tSelect any one of the following options for Banking : "; //menu
        cout<<endl<<"\t\t1). Withdraw money.";
        cout<<endl<<"\t\t2). Deposit money.";
        cout<<endl<<"\t\t3). Check balance.\n";
         cout<<"\n**********************************************************************\n";
        cin>>option;
        if(option == 1)
            b.with_draw();                      // Calling with_draw() function by using object 'b'
        else if(option==2)
            b.deposit();                        // Calling deposit() function by using object 'b'
        else if(option==3)
            b.check_balance();                  // Calling check_balance() function by using object 'b'
        else
            cout<<"Enter valid option";
         cout<<"\n\n**********************************************************************\n";
        cout<<"\n\nDo you want to try this machine once more, press 'y'/'n' : ";
        cin>>ch;
        cout<<"\n**********************************************************************";
    }while(ch=='y');
    return 0;
}
