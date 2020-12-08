#include<iostream>
using namespace std;
int main()
{
    int chair,combination,person,i;
    cout<<"Enter persons : ";    cin>>person;
    cout<<"Enter chairs : ";    cin>>chair;

    if(person>chair)
    {
        combination=1;
        for(i=(person-chair)+1;person>=i;i++)
        {
            combination=combination*i;
        }
        cout<<"Combination : "<<combination;
    }
    else
        cout<<"\nPersons must be greater than chairs.";

    return 0;
}

