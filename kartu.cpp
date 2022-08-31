#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string kartu, bonus;
	cout<<"pilih kartu gold/premium"<<endl;
	cin>>kartu;
	if(kartu=="gold") {
		cout<<"pilih bonus ambil/tukar"<<endl;
		cin>>bonus;
		if(bonus=="ambil") {
			cout<<"selamat bonus anda telah diambil"<<endl;
		}
		else if(bonus=="tukar") {
			cout<<"selamat bonus anda telah masuk ke poin"<<endl;
		}
		else {
			cout<<"anda tidak mendapat bonus"<<endl;
		}
	}
	else if(kartu=="premium") {
		cout<<"pilih bonus ambil/tukar"<<endl;	
		cin>>bonus;
		if(bonus=="ambil") {
			cout<<"selamat bonus anda telah diambil"<<endl;
		}
		else if(bonus=="tukar") {
			cout<<"selamat bonus anda telah masuk ke poin"<<endl;
		}
		else {
			cout<<"anda tidak mendapat bonus"<<endl;
		}
	}
	else {
		cout<<"pilih kartu yang benar"<<endl;
	}
	return 0;
}