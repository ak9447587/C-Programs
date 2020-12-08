#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    string str;
    file.open("testing",ios::out);
    if(!file)
    {
        cout<<"Error";
    }
    else{
        cout<<"file is created";
    }
    file<<"myfile";
    file.close();

    ifstream in;
    in.open("testing",ios::in);
    while(getline(in,str))
    {
        cout<<endl;
        cout<<str;
    }
    file.close();
    return 0;
}
