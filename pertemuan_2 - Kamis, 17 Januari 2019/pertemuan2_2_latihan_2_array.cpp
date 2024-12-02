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
			cout << "Nilai dari n [" << i << "] [" << j << "] = ";
			cin >> array[i][j];
		}
	}

	for(int i = 0; i < baris/*2*/; i++){
		for(int j = 0; j < kolom/*2*/; j++){
			cout << setw(5) << array[i][j];
		}
		cout << endl;
	}

	// 1 2
	// 4 5
	system("pause");
	cin.get();
	return 0;
}
