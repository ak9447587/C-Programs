#include <iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream outfile("find.txt");
for(int i=0;i<70;i++)
{
    outfile<<i;
    outfile.flush();
}
cout<<"done";
outfile.close();

cout<<str;

return 0;
}
