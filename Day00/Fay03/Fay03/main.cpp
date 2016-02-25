#include <iostream>
#include <string>

using namespace std;

int main () 
{

	string firstName;
	char lastName[20];
	int age;
	char grade;

	cout<<"Enter your first name: ";
	getline (cin, firstName);

	cout<<endl;

	cout<<"Enter your last name: ";
	cin.getline(lastName, 20);

	cout<<endl;

	cout<<"What letter grade do you deserve? ";
	cin>>grade;

	cout<<endl;

	cout<<"What is your age? ";
	cin>>age;

	cout<<endl;

	cout<<"Name: "<<lastName<<", "<<firstName;

	cout<<endl;

	char grade2=grade+1;

	cout<<"Grade: "<<grade2<<"\n\n";

	return 0;
}