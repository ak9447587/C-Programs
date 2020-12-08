#include<iostream>
using namespace std;
class Binary
{
    int a=4,b=3;
public:
    void display()
    {
        cout<<endl<<"Values of a and b  "<<a<<"\t"<<b<<endl;
    }
    void operator+(Binary)
    {
        a=a+b;
        cout<<"Sum is "<<a;

    }

};
int main()
{
    Binary bin1,bin2;
    bin1+bin2;
    bin1.display();
    return 0;
}
