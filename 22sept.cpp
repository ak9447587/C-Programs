#include <iostream>

using namespace std;
class binaryop
{
    public:
int a,b;

binaryop(){}
binaryop(int x,int y)
{
a=x;
b=y;
}
void getdata()
{
cout<<"Enter values";
cin>>a>>b;

}

void operator ==(binaryop obj2)
{
cout<<obj2.a<<endl;

if(obj2.a==b)
{
cout<<"Values are equal";
}

else
{
cout<<"Values are not equal";
}
}
friend binaryop operator >(binaryop x,binaryop y);

void display()
{
cout<<a<<b;
}
};

binaryop operator >(binaryop x,binaryop y)
{
binaryop z;

if(x.a>y.a)
{
z.a=1;
z.b=2;
}
else{
z.a=3;
z.b=4;
}
return z;
}

int main()
{
binaryop obj1;
binaryop obj2(10,20);
obj1.getdata(); // a =25 b=25
obj2==obj1; // obj2 is the argument passed to the method obj1 ==>a=25,b=25 obj2=> a=10 b=20)
binaryop obj3;
obj3=obj1>obj2; //friend function
obj3.display();


return 0;
}
