#include <iostream>
using namespace std;

int main(){

	int jumlah;
	int angka[10];
	cout << "Masukan jumlah penjumlahan = ";
	cin >> jumlah; //3 

	jumlah - 1;

	for(int i = 1; i <= jumlah; i++){
		cout << "Angka " << i << " = ";
		cin >> angka[i];

		if(i == jumlah){
			cout << "Hasil = " << angka[1] + angka[2] + angka[3] << endl;
		}
	}

	system("pause");
	return 0;
}
