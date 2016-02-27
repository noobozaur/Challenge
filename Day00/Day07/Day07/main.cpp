#include <iostream>
#include <cstring>

using namespace std;

int main ()
{

	char firstName[20];
	char lastName[30];

	cout<<"Enter your first name: ";
	cin>>firstName;

	cout<<endl;

	cout<<"Enter your last name: ";
	cin>>lastName;

	cout<<endl;

	cout<<"Here's information in a single string: "<<lastName<<", "<<firstName;

	return 0;
}