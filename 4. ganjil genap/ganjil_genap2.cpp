#include <iostream>
using namespace std;

void genap(int angka){

	cout << "GENAP = ";
	for(int i = 2; i <= angka; i+=2){
		cout << i << " ";
	}

	cout << endl;

	cout << "GANJIL = ";
	for(int i = 1; i <= angka; i += 2){
	cout << i << " ";
	}
}


int main(){

	int patokan = 10;

	genap(patokan);
	
	cout << endl << endl;
	
	system("pause");
	cin.get();
	return 0;
}






























/*
DIBUAT OLEH ARIF SYAHBANI KELAS X RPL TAHUN 2019 SEMESTER 2
TUGAS PEMROGRAMAN DASAR - PERSIAPAN UNTUK LSP
~ MENAMPILKAN ANGKA GANJIL DAN GENAP ~
*/
