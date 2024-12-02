#include <iostream>
#include <string>
using namespace std;

int main(){

	string kota[3] = {"Pekanbaru", "Jakarta", "Medan"};

	for(int i = 0; i < 3; i++){
		cout << "Kota yang pernah saya kunjungi = " << kota[i];
		cout << endl;
	}

	system("pause");

	cin.get();
	return 0;
}