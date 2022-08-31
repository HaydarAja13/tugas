#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string lampu;
	cout<<"merah?ijo?"<<endl;
	cin>>lampu;
	if(lampu=="merah") {
		cout<<"berhenti\n";
	}
	else if(lampu=="ijo") {
		cout<<"jalan\n";
	}
	else {
		cout<<"mati lampu\n";
	}
	return 0;
}
