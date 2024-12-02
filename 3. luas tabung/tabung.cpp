#include <iostream>
using namespace std;

float hitung_luas_tabung(float tinggi, float jari_jari){
	return 3.14 * jari_jari * jari_jari * tinggi;
}

void tampilkan_luas_tabung(){

	float tinggi, jari_jari;

	cout << "tinggi = ";
	cin >> tinggi;
	
	cout << "jari jari = ";
	cin >> jari_jari;
	
	cout << "Luas = " << hitung_luas_tabung(tinggi, jari_jari);
	cout << endl << endl;
}


int main(){
	
	tampilkan_luas_tabung();
	
	system("pause");
	cin.get();
	return 0;
}





























/*
DIBUAT OLEH ARIF SYAHBANI KELAS X RPL TAHUN 2019 SEMESTER 2
TUGAS PEMROGRAMAN DASAR - PERSIAPAN UNTUK LSP
~ PROGRAM MENGHITUNG LUAS TABUNG MENGGUNAKAN PROSEDUR DENGAN MENGGUNAKAN NILAI BALIK ~
*/
