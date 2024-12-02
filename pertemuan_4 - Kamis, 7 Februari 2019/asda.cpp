#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	/* soal dari Audy
	1. buat array multidimensi <<
	2. buatlah tabel dengan ukuran 3x3 yang isinya makanan favorit
	*/

	int array[5][5];
	int row, coll;

	cout << "Masukan jumlah baris 1~5 = ";
	cin >> row;
	
	cout << "Masukan jumlah kolom 1~5 = ";
	cin >> coll;

	for (int i = 0; i < row; i++){
		for (int j = 0; j < coll; j++){
			cout << "Masukan nilai pada indeks = [" << i << "] [" << j << "] = ";
			cin >> array[i][j];
		}
	}

	cout << "berikut adalah tabelnya = " << endl << endl;

	for(int i = 0; i < row; i++){
		for(int j = 0; j < coll; j++){
			cout << setw(5) << array[i][j];
		}
		cout << endl;
	}

	system("pause");

	cin.get();
	return 0;
}
