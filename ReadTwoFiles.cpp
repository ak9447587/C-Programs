#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ifstream read1,read2;
    read1.open("Student_Details.txt",ios::in);
    read2.open("CreateFile.txt",ios::in);
    while(getline(read1,s))
    {
        cout<<endl<<s;
    }
    while(getline(read2,s))
    {
        cout<<endl<<s;
    }
    read1.close();
    read2.close();
    return 0;
}
