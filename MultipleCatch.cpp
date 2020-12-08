#include <iostream>
using namespace std;
void Debug(int test)
{
    try
    {
        if(test==0) throw test;
        else if(test==1) throw 't';
        else
            cout<<"End";
    }
    catch(int test1)
    {
        cout<<"Caught integer\n";
    }
    catch(char c)
    {
        cout<<"Caught character\n";
    }
}
int main()
{
    int a,b,result;
    a=1;
    Debug(a);
    b=0;
    Debug(b);
    return 0;
}
