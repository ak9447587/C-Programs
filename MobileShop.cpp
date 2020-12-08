 /*Write a program to store the data of mobile shop in a file with appropriate data members and
member functions. Use read and write method to perform the file operations. Read only the price and
model value of mobile from file.*/

#include<iostream>
#include<fstream>
using namespace std;
class Shop
{
    int itemno[5],price[5],i;
    string modelname[5],brandname[5];
    char choice;
public:
    void getdata()
    {
        do{
                cout<<"********************Shop Details******************\n";
                for(i=0;i<5;i++)
                {
                    cout<<"\nEnter Item no. : ";
                    cin>>itemno[i];
                    cout<<"Enter brand name : ";
                    cin>>brandname[i];
                    cout<<"Enter model name : ";
                    cin>>modelname[i];
                    cout<<"Enter price : ";
                    cin>>price[i];
                }
                cout<<"Do you want to add more items : ";
                cin>>choice;
          }while(choice=='y' || choice=='Y');

    }
    void store()
    {
        fstream getphone;
        getphone.open("ShopDetails.txt",ios::out);

        if(!getphone)
        {
            cout<<"\nError : Unable to create file\n";
        }
        getphone<<"*****************Full Mobile Shop Details*********************\n";
        for(i=0;i<5;i++)
        {
            getphone<<"Item no. : "<<itemno[i];
            getphone<<"\nBrand name : "<<brandname[i];
            getphone<<"\nModel name : "<<modelname[i];
            getphone<<"\nPrice : "<<price[i]<<endl;
        }

        getphone.close();
    }
    void display()
    {
        fstream showphone;
        string s,line[20];
        int i=0,j,k;
        showphone.open("ShopDetails.txt",ios::in);

        if(!showphone)
        {
            cout<<"\nError : Unable to open file\n";
        }
        while(getline(showphone,s))
        {
          line[i]=s;
          i++;
        }
        showphone.close();
        cout<<"\n*********************Following is the list of all Mobile models name with price**************";
        for(i=3;i<=20;i=i+4)
        {
            for(j=i,k=0;k<2;j++,k++)
            {
                cout<<endl<<line[j];
            }
        }

    }
};
int main()
{
    Shop shopobj;
    shopobj.getdata();
    shopobj.store();
    shopobj.display();
    return 0;
}
