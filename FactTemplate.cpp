#include <iostream>

using namespace std;

template<typename T>
T fact(T n)
{
if(n==1)
{
return 1;
}
else
{
return(n*fact(n-1));
}
}
int main()
{
int k;
cout << "Enter a value for factorial" << endl;
cin>>k;

cout<<fact(k);
return 0;
}
