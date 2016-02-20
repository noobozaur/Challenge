#include <iostream>
using namespace std;

int main ()
{

	int n_int = INT_MAX;
	short shrt = SHRT_MAX;
	long loong = LONG_MAX;
	long long llong = LLONG_MAX;

	cout<<"int is "<<sizeof(int)<<" bytes.\n";
	cout<<"short is "<<sizeof(short)<<" bytes.\n";
	cout<<"long is "<<sizeof(long)<<" bytes.\n";
	cout<<"long long is "<<sizeof(long long)<<" bytes\n\n\n";

	cout<<"Maximum values:\n";
	cout<<"int: "<<n_int<<endl;
	cout<<"short: "<<shrt<<endl;
	cout<<"long: "<<loong<<endl;
	cout<<"long long: "<<llong<<endl;

	return 0;
}