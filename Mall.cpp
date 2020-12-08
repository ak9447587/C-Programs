#include<iostream>
using namespace std;
class LED
{
protected:
    int price,choice;
public:
    LED()
    {
        price=40000;
    }
    void get_details()
    {
        cout<<"*****************Select Option*************";
        cout<<endl<<"1) LED ";
        cout<<endl<<"2) LED and Dish Connection ";
        cout<<endl<<"3) Normal tv ";
        cin>>choice;
        cout<<endl<<endl;
    }
};
class Discount: public LED
{
    float bill,disc;
public:
    void discounttt()
    {
        if(choice==1)
        {
            cout<<endl<<"You got 5% discount \n";
            disc=5;
            disc=(price*disc)/100;
            bill=price-disc;
        }
        else if(choice==2)
        {
            cout<<endl<<"You got 10% discount\n";
            disc=10;
            disc=(price*disc)/100;
            bill=price-disc;
        }
        else{
                cout<<endl<<"You got no discount\n";
                bill=price;
        }

    }
    void billing()
    {
        cout<<"\nYou bill is Rs."<<bill;
    }
};
int main()
{
        LED obj;
        Discount l;
        l.get_details();
        l.discounttt();
        l.billing();
    return 0;
}
