#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main ()
{

	string firstName;
	string lastName;

	cout<<"Enter your first name: ";
	getline (cin, firstName);

	cout<<endl;

	cout<<"Enter your last name: ";
	getline (cin, lastName);

	cout<<endl;

	cout<<"Prodolzhay coditb gandon: "<<lastName<<", "<<firstName<<"\n\n";

	return 0;
}
