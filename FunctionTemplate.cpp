#include<iostream>
using namespace std;
template<typename F>
void message(F mes)
{
    cout<<"You got one message : "<<mes<<endl;
}
template<typename F,typename F1>
void message(F name,F1 marks)
{
    cout<<name<<" got "<<marks<<" marks";
}
int main()
{
    message("Hello");
    message("Ashok",453);
    return 0;
}
