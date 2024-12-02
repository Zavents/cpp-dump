#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	int array[10][10], baris, kolom;

	cout << "\nJumlah baris 1 ~ 10 = "; //2
	cin >> baris;

	cout << "\nJumlah kolom 1 ~ 10 = "; //2
	cin >> kolom;

	for(int i = 0; i < baris/*2*/; i++){
		for(int j = 0; j < kolom/*2*/; j++){
			cout << "Nilai dari [Jumlah] [Tahun] [" << i << "] [" << j << "] = ";
			cin >> array[i][j];
		}
	}

	cout  << setw(7) << "tahun" << setw(7) << "jumlah" << endl;
	for(int i = 0; i < baris/*2*/; i++){
		for(int j = 0; j < kolom/*2*/; j++){
			cout << setw(7) << array[i][j];
		}
		cout << endl;
	}

	system("pause");

	cin.get();
	return 0;
}
