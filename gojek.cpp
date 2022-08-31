#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string g;
	int jarak, biaya;
	cout<<"goride?gocar"<<endl;
	cin>>g;
	if(g=="goride") {
		cout<<"pilih jarak mu"<<endl;
		cin>>jarak;
		if(jarak<=5) {
			biaya=5*2000+5000;
			cout<<"biaya anda "<<biaya<<endl;
		}
		else if(jarak<=10) {
			biaya=10*2500+7500;
			cout<<"biaya anda "<<biaya<<endl;
		}
		else if(jarak<=15) {
			biaya=15*3000+10000;
			cout<<"biaya anda "<<biaya<<endl;
		} else {
			cout<<"jauh maap"<<endl;
		}
	}
	else if(g=="gocar") {
		cout<<"pilih jarak mu"<<endl;
		cin>>jarak;
		if(jarak<=5) {
			biaya=5*3000+15000;
			cout<<"biaya anda "<<biaya<<endl;
		}
		else if(jarak<=10) {
			biaya=10*4500+17500;
			cout<<"biaya anda "<<biaya<<endl;
		}
		else if(jarak<=15) {
			biaya=15*5000+20000;
			cout<<"biaya anda "<<biaya<<endl;
		} else {
			cout<<"jauh maap"<<endl;
		}
	}
	else {
		cout<<"harap masukan yang benar"<<endl;
	}
	return 0;
}