#include<iostream>
using namespace std;

class e_bill
{
private:
    int c_no;
    char c_name[20];
    char c_adres[60];

    int units;
    double bill;
public:
void get()
{
    cout<<"Enter Details of Customer Below :: \n" <<endl;
    cout<<"Enter Customer No. :: ";
    cin>>c_no;
    cout<<"\nEnter Customer Name :: ";
    cin>>c_name;
    cout<<"\n Enter Address of customer ::";
    cin>>c_adres;
    cout<<"\nEnter the contact number of customer ::";
    cin>>c_no;
    cout<<"\nEnter No. of Units used :: ";
    cin>>units;
}

void put()
{
    cout<<"\nEntered Details of Customer are :: " <<endl;
    cout<<"\nCustomer No. is : "<<c_no;
    cout<<"\n\nCustomer Name is : "<<c_name;
    cout<<"\n customer Address is -:"<<c_adres;
    cout<<"\n customer contact no:"<<c_no;
    cout<<"\n\nNumber of Units Consumed : "<<units;
    cout<<"\n\nBill of Customer : "<<bill;
}

void calc_bill()
{
    if(units<=100)
    bill=units*6;
    else if(units<=200)
    bill=units*8;
    else if(units <=200)
    bill=units*10;
}
};

int main()
{
        e_bill b1;
        b1.get();
        b1.calc_bill();
        b1.put();

cout<<"\n";

return 0;
}
