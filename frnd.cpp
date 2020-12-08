#include <iostream>
using namespace std;
class frd_func
{
public:
    int marks;
    friend void getdata();
    void display()
    {
        cout<<endl<<marks;
    }
};
void getdata()
{
    frd_func obj;
    cout<<"Enter marks";
    cin>>obj.marks;
    cout<<obj.marks;
}
int main()
{
    frd_func f1;
    getdata();

    f1.display();
    return 0;
}
