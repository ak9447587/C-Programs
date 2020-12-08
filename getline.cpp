#include <iostream>
#include<fstream>
using namespace std;

int main()
{
fstream file;
char name[10];
string str;
file.open("welcome.txt",ios::out);
if(!file)
{
cout<<"Error creating a file";
}
else
{
cout<<"file is created"<<endl;
}
cout<<"Enter the name"<<endl;
cin>>name;
file<<name;
file.close();
file.open("welcome.txt",ios::in);
while(getline(file,str))
{
cout<<"The name in the file is"<<str;
}

return 0;
}
