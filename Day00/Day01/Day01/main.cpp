#include <iostream>
using namespace std;

int main ()
{

	long long world_population;
	long long rus_population;
	long float procent;

	cout<<"Enter the world population: ";
	cin>>world_population;

	cout<<endl;

	cout<<"Enter the population of Russia: ";
	cin>>rus_population;

	cout<<endl;

	procent=rus_population/(world_population/100);

	cout<<"The population of Russia is "<<procent<<" % of world population\n\n";

	return 0;
}