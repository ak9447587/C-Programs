#include <iostream>
using namespace std;
void Greater(int a,int b)
{
    if((a-b)>0)
    {
        cout<<"Subtraction is : "<<a-b;
    }
    else
    {
            throw(a-b);
    }
}
int main()
{
    int a,b,result;
    cout<<"Enter values of a and b : ";
    cin>>a>>b;
    try
    {
        cout<<"Calling Greater fun : \n";
        Greater(a,b);
    }
    catch(int i)
    {
        cout<<"Caught the exception";
    }
    return 0;
}
