#include <iostream>
#include<fstream>
using namespace std;
class FileHandling
{
    public:
    ofstream file_ptr;
    string uni,data;
    int rank;
    void creating()
    {
        file_ptr.open("CreateFile.txt",ios::out);
        if(!file_ptr)
        {
            cout<<"Error";
        }
        else
        {
            cout<<"CreateFile.txt file is created";
        }
    }
    void writing()
    {
        cout<<"\nUniversity : ";
        cin>>uni;
        cout<<"Rank : ";
        cin>>rank;
        file_ptr<<"\nUniversity : "<<uni;
        file_ptr<<"\nRank : "<<rank;
        file_ptr.close();
    }

    void reading()
    {
        ifstream in;
        in.open("CreateFile.txt",ios::in);
        while(getline(in,data))
        {
            cout<<endl;
            cout<<data;
        }
        file_ptr.close();

    }




};
int main()
{
    FileHandling f;
    f.creating();
    f.writing();
    f.reading();
    return 0;
}
