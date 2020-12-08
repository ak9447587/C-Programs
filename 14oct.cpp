#include <iostream>
#include<fstream>
using namespace std;

int main()
{
fstream file;
char ch;
file.open("myfile.txt",ios::out);
if(!file)
{
cout<<"Error";
}
else
{
cout<<"Created"<<endl;
}
cin.get(ch);
file.put(ch);
file.close();
return 0;
}
