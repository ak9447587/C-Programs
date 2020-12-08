#include<iostream>
using namespace std;
class convert
{
int a;
public:

    convert(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<a;
    }
};
int main()
{
    int p;
    cout<<"Enter value : ";
    cin>>p;
    convert obj=p;
    obj.display();
    return 0;
}
