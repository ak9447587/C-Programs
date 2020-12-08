#include<iostream>
using namespace std;
class abc
{
public:
    int a,b;

    void get_data()
    {
        cout<<"Enter value of a and b ";
        cin>>a>>b;
    }
    //cout<<"Value of c is "<<c<<endl;
    void display()
    {
        //cout<<"Value of c is "<<c<<endl;
        cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
    }
};
int main()
{
    abc o;
    o.get_data();
    o.display();
    return 0;
}
