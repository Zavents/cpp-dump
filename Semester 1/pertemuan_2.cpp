#include <iostream>

using namespace std;

int main(){
	int a;
	int b = 2018;

	cout << "selamat datang di aplikasi umur \n \n";
	cout << "masukan tahun lahir kamu = ";
	cin >> a;
	a = b - a;
	cout << "\numur kamu adalah " << a << " tahun" << endl;

	cin.get();
	return 0;
}