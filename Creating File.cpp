#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("testing.txt",ios::out);
    if(!file)
    {
    cout<<"Error";
    }
    else{
    cout<<"file is created";
    }
    file.close();

    return 0;
}
