
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    string s,words;
    int count,len;
    fstream fileptr2;

    fileptr2.open("Details_copy.txt",ios::out);
    if(!fileptr2)
    {
        cout<<"\nError : Unable to open file\n";
    }
    else
        cout<<"Reading Details_copy file \n";
    fileptr2.seekg(7);
   // cout<<"Pointer is at "<<fileptr2.tellg();
    cout<<"Enter few words : ";
    getline(cin,words);
    fileptr2<<words;
    fileptr2.close();

    fileptr2.open("Details_copy.txt",ios::in);
    if(!fileptr2)
    {
        cout<<"\nError : Unable to open file\n";
    }
    else
        cout<<"Reading Details_copy file \n";
    while(getline(fileptr2,s))
    {

        cout<<s<<endl;
      //  len=s.length();
       // cout<<"len : "<<len;
    }
   fileptr2.close();


    return 0;
}
