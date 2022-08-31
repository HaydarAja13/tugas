#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y, z, v;
	cout<<"menghitung volume balok"<<endl;
	cout<<"panjang=\n";
	cin>>x;
	cout<<"lebar=\n";
	cin>>y;
	cout<<"tinggi=\n";
	cin>>z;
	v = x*y*z;
	cout<<"volume=\t"<<v<<endl;
	return 0;
}
