#include <iostream>

using namespace std;
class toll
{
    int n; int wn; int total;
    int rs=50; int amount1;
    int amount2;//variables declared
public://access specifier so that objects access the functions

    int totalcars()//function for the details of car passed
    {
        cout<<"enter number of cars passed who paid toll"<<endl;
        cin>>n;
        cout<<"enter number of cars who didnt pay toll"<<endl;
        cin>>wn;
        total=n+wn;
        cout<<"total number of cars passed"<<total<<endl;
    return 0;
    }
int amountcollected()//function for the detail of amount collected
{
amount1= n*50;
amount2=total*50;
cout<<" the amount need to be collected is"<<amount2<<endl;
cout<<"\t but the amount collected is"<<amount1;
return 0;


}


};

int main()
{
toll t1;//object declaration
t1.totalcars();//function calling
t1.amountcollected();
return 0;
}
