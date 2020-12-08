#include<iostream>
using namespace std;
class fibo
{
public:
    int n,val1,val2,next=0;
    fibo()
    {
            val1=0;
            val2=1;
    }
    fibo(int a,int b)
    {
        val1=a;
        val2=b;
    }
    void display_series()
    {
        cout<<"Enter no. of vales: ";
        cin>>n;
        for (int i = 1; i <= n; ++i)
        {
            if(i == 1)
            {
                cout<<val1;
                continue;
            }
            if(i == 2)
            {
                cout << val2;
                continue;
            }
            next= val1 + val2;
            val1 = val2;
            val2 = next;

            cout <<" "<< next;
        }

    }




};
int main()
{
    fibo f1;
    f1=fibo(0,1);

    f1.display_series();
return 0;
}
