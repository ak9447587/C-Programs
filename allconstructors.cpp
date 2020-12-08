#include<iostream>
using namespace std;
class swap1
{
public:
    int a,b;
    int *k,*l;
   swap1()
   {
       a=10;
       b=20;
   }
   swap1(int y,int z)
   {
       a=y;
       b=z;
   }

   swap1(swap1 &x)
   {
       a=x.a;
       b=x.b;
   }
   swap1(swap1 &e,swap1 &f)
   {
       a=e.a;
       b=f.b;
   }
    swap1(int a,int b)
    {

    }
   void swapping()
   {
    cout<<"Values before swapping : ";
    cout<<endl<<"a : "<<a<<" and b : "<<b<<endl;
       a = a + b;
    b = a - b;
    a = a - b;
    cout<<"Values after swapping : ";
    cout<<endl<<"a : "<<a<<" and b : "<<b;
   }
};
int main()
{
    swap1 s;
    cout << "Calling Default Constructor"<<endl;
    s.swapping();
    cout <<endl<<"Calling Perameterized Constructor" <<endl;
    swap1 s1(100,200);
    s1.swapping();
    cout << "Calling Copy Constructor" << endl;
    swap1 s2=s1;
    s2.swapping();
    cout <<"Calling Dynamic Constructor"<<endl;
    s3.swapping(300,400);
    s3.swapping();
    return 0;
}
