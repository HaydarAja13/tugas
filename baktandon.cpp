#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	float phi = 3.14;
	int x, y, z, r, t, vb, vt, hasil;
	cout<<"menghitung volume air"<<endl;
	cout<<"panjang bak=\n";
	cin>>x;
	cout<<"lebar bak=\n";
	cin>>y;
	cout<<"tinggi bak=\n";
	cin>>z;
	vb = x*y*z;
	cout<<"jari jari tandon=\n";
	cin>>r;
	cout<<"tinggi tandon=\n";
	cin>>t;
	vt = phi*r*r*t;
	cout<<"luas bak="<<vb<<endl;
	cout<<"luat tandon="<<vt<<endl;
	hasil = vb+vt;
	cout<<"luas gabungan="<<hasil<<endl;
	return 0;
}
