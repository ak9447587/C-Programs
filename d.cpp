#include <iostream>

using namespace std;
class count
{
static int i;

public:
count()
{
i++;
}


static void display(){
cout<<i;
}

};
int count :: i;
int main()
{
count o1,o2,o3;
count::display();

return 0;
}
