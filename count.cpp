#include <iostream>

using namespace std;
class count_objet
{

public:
    static int count;
    count_object()
    {

        count++;
    }
    static void display()
    {
         cout<<"COunt : "<<count;
    }
};
int count_objet:: count;

int main()
{
    count_objet c1,c2,c3;
c1.display();
    c2.display();
    c3.display();

return 0;
}
