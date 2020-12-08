// Banking Transaction Operations

#include<iostream>              // inlcuding Header file
using namespace std;
class Banking                   //Declaring Banking class
{
    int account;           //Private data members
    string name;
public:
    void get_data()                        // Defining check_balance function for balance checking
    {
            cout<<"\n*****************************************\n";
            cout<<"Enter name and account no. "<<endl; cin>>name,account;
            cout<<"\n*****************************************\n";
    }
};
int main()           //main function
{
    Banking b;      // Creating object as "b" of class "Banking"
    b.get_data();
    fstream f;
    f.open("write",ios::out);
    f.write()
    return 0;
}
