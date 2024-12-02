#include <iostream>
using namespace std;

int main(){

// Menerima input data
	int jumlahArr;
	cout << "Masukkan Jumlah Array : ";
	cin >> jumlahArr;

	int a[jumlahArr] = {};

	for(int i = 0; i < jumlahArr; i++) {
		cout << "Array index[" << i << "] : ";
		cin >> a[i];
	}

	int temp, mark, find;
	
// // Tampilkan data
// 	cout << endl;
// 	for(int i = 0; i < jumlahArr; i++) {
// 		cout << "Array index[" << i << "] : " << a[i] << "\n";
// 	}

// Sorting
	cout << endl << endl;
	cout << "Hasil urutan : " << endl;

	for(int i = 0; i < jumlahArr; i++){
		mark = i;
		for(find = i+1; find < jumlahArr; find++){
			if(a[find] > a[mark]){
				mark = find;
			}
		}
		
		if(mark != i){
			temp = a[mark];
			a[mark] = a[i];
			a[i] = temp;
		}
	}

// Tampilkan hasil sort
	cout << "\n";
	for(int i = 0; i < jumlahArr; i++) {
		cout << "Array index[" << i << "] : " << a[i] << "\n";
	}
	
	system("pause");
	cin.get();
	return 0;
}






























/*
DIBUAT OLEH ARIF SYAHBANI KELAS X RPL TAHUN 2019 SEMESTER 2
TUGAS PEMROGRAMAN DASAR - PERSIAPAN UNTUK LSP
~ SELECTION SORT ~
*/


// a[5] = {1,2,3,4,5};

// int alenght = sizeof(a) / sizeof(a[0]);

// for(int i = 0; i < a.length; i++){
// 	cout << asw
// }