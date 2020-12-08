#include <iostream>

using namespace std;
class inser_extr
{
int n,j;
public:
inser_extr()
{
n=10;
j=20;
}
inser_extr(int a,int b)
{
    n=a;
    j=b;
}
 ostream &operator<<(ostream &out, inser_extr &obj)
{
out<<"n value is"<<obj.n<<"\t"<<"j value is"<<obj.j<<endl;
return out;

}

istream &operator>>(istream &in,inser_extr &obj2)
{
in>>obj2.n>>obj2.j;
return in;
}


};



int main()
{
inser_extr o1(500,600);
inser_extr o2(100,200);
inser_extr o3;
cout<<"Enter object value:"<<endl;
cin>>o3;
cout<<"object 1"<<o1<<endl;
cout<<"object 2"<<o2<<endl;
cout<<"object 3"<<o3<<endl;

return 0;
}

