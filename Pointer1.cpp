#include<iostream>
using namespace std;
int main()
{
    int a,*p,arr[5]={3,43,4,54,43},i;
    for(i=0;i<5;i++)
    {
            cout<<"\nValue of array "<<i+1<<" : "<<arr[i]<<endl;
    }

    cout<<"\nAddress of arr : "<<&arr;
    p=arr;
    for(i=0;i<5;i++)
    {
        cout<<"\nValue of array using pointer"<<i+1<<" : "<<*p<<endl;
        p++;
    }
   /* cout<<"\np : "<<p;
    cout<<"\n*p : "<<*p;
    *pt=p;
    cout<<"\n**p : "<<**pt;
    cout<<"\np++ : "<<**pt+a;
    **pt=**pt++;
    cout<<"\n*pt : "<<**pt;*/
return 0;
}
