#include <iostream>
using namespace std;

int kuadrat(int x){
	int y;
	y = x * x;
	return y;
}

void tampilkan_kuadrat(int input){
	cout << input << endl;
}

int main(){
	int input, hasil;

	cout << "masukan angka yang ingin di kuadratkan = ";
	cin >> input;
	cout << "kuadrat dari angka " << input << " adalah = ";

	hasil = kuadrat(input);
	tampilkan_kuadrat(hasil);

	cin.get();
	return 0;
}