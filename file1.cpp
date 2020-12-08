#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char s[10];
    ofstream f;
    f.open("file.txt",ios::out);
    if(!f)
    {
        cout<<"error";
    }
    else{
        cout<<"file is created\n";
    }
    cin>>s;
    f<<s;


    f.close();
    ifstream read;
    read.open("file.txt",ios::in);
    while(read)
    {
        read.getline()
        cout<<endl<<s;
    }
    read.close();
    return 0;
}
