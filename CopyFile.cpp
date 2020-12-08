#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    fstream fileptr1,fileptr2;
    fileptr1.open("Details.txt",ios::in);
    fileptr2.open("Details_Another_copy.txt",ios::out);
    if(!fileptr1)
    {
        cout<<"\nError : Unable to open Details.txt file\n";
    }
    if(!fileptr2)
    {
        cout<<"\nError : Unable to open file\n";
    }
    while(getline(fileptr1,s))
    {
        fileptr2<<s<<endl;
    }
    fileptr1.close();
    fileptr2.close();

    fileptr2.open("Details_Another_copy.txt",ios::in);
    if(!fileptr2)
    {
        cout<<"\nError : Unable to open file\n";
    }
    else
        cout<<"Reading Details_Another_copy file \n";
    while(getline(fileptr2,s))
    {
        cout<<s<<endl;
    }
   fileptr2.close();
    return 0;
}
