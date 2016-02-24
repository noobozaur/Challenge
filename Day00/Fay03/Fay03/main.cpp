#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char name[15];
	cin>>name;

	cout<<"Okey, "<<name;
	cout<<"yur name has "<<strlen(name)<<" letters\n\n";

	return 0;
}