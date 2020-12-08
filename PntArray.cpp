//============================================================================
// Name        : PointerArray.cPP
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
using namespace std;
int main()
{
	int arr[2][2]={{10.20},{40,32}};
	int *ptr;
	ptr=&arr[0][0];
	cout<<"1). *(arr+0) : "<<*(arr+0);
	cout<<"2). *(arr+1) : "<<*(arr+1);
	return 0;
}
