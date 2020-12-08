#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int rollno;
    fstream fptr;
    fptr.open("13Oct.txt",ios::out);
    if(!fptr)
    {
        cout<<"Error";
    }
    else
        cout<<"FIle creating";
    cout<<"Enter you roll no. : ";
    cin>>rollno;
    fptr<<rollno;
    fptr.close();
    return 0;

}
