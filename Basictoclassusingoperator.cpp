#include<iostream>
using namespace std;
class convert
{
int a;
public:
    void operator =(int b)
    {
        a=b;
    }
    void display()
    {

        cout<<a;
    }
};
int main()
{
    int a;
    a=3;
    convert obj;
    obj=a;
    obj.display();
    return 0;
}
