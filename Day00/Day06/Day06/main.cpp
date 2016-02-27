#include <iostream>
using namespace std;

struct pizza
{
	char name[20];
	float diametr;
	double weight;
};

int main ()
{

	pizza pizzza;

	cout<<"Enter the name of pizza: ";
	cin>>pizzza.name;

	cout<<endl;

	cout<<"Enter the diametr of pizza: ";
	cin>>pizzza.diametr;

	cout<<endl;

	cout<<"Enter the weight of pizza: ";
	cin>>pizzza.weight;

	cout<<endl;

	cout<<pizzza.name<<endl<<pizzza.diametr<<endl<<pizzza.weight;

	return 0;
}