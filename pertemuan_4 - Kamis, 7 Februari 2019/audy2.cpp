	
	/* soal dari Audy
	1. buat array dua dimensi
	2. buatlah tabel dengan ukuran 2x2 yang isinya makanan favorit <<
	*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

	string array[5][5];
	string baris, kolom;

	cout << "Masukan total baris (maksimal 2) = ";
	cin >> baris;

	cout << "Masukan total baris (maksimal 2) = ";
	cin >> kolom;

	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << "Masukan nilai pada indeks = [" << i << "] [" << j << "] = ";
			cin >> array[i][j];
		}
	}

	cout << "berikut adalah tabelnya = " << endl;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << setw(10) << array[i][j];
		}
		cout << endl;
	}

	system("pause");
	cin.get();
	return 0;
}
