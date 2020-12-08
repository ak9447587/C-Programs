#include<iostream>
using namespace std;

int main()
{
int pay,withoutpay,a,b,c;
cout<<"welcome to Toolbooth"<<endl;
cout<<"\nenter the total number cars pass through toolbooth"<<endl;
cin>>b;
cout<<"\nenter the number of cars with paying 50 RS price "<<endl;
cin>>pay;
for(int n=1;n<=pay;n++)
{
a=pay*50;

}
withoutpay=b-pay;
cout<<"\nethe number of cars cars without paying price: "<<withoutpay<<endl;

c=pay+withoutpay;
if(c!=b)
{
cout<<"\nemployee is cheater"<<endl;
}
cout<<"\nthe total amout of money is colllected is "<<a<<endl;
return 0;
}
