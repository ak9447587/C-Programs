#include<iostream>
using namespace std;
class Binary
{
    int a=9,b=6,sum=0;
public:

    void get_data()
    {
        cout<<"Enter value of a and b ";
        cin>>a>>b;
    }
    void display()
    {
        cout<<endl<<"value of a and b and Sum is "<<a<<" "<<b<<" "<<sum<<endl;
    }
    Binary operator+(Binary obj)
    {

        cout<<endl<<"Inside operator.... value of a and b and sum is "<<a<<" "<<b<<" "<<sum;

        obj.sum=a+b;
        a=89;
        return obj;
    }

};
int main()
{
    Binary bin1,bin2,bin3,o;


    bin3=bin1+bin2;
    bin3.display();
    return 0;
}
