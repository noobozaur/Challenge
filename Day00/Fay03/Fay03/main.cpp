#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	cout<<"-Hello, what's your name?\n\n-";

	char name[15];
	cin.getline(name, 20);

	cout<<endl;

	cout<<"-Okey, "<<name<<" how did you spend tour weekends?\n\n-";

	cout<<"I had a good time in museum";

	return 0;
}