#include <iostream>
using namespace std;

float luasSegitiga(float a, float t){
	return (a * t)/2;
}

void tampilkanLuasSegitiga(){
	
	float alas, tinggi;
	
	cout << "Masukan Alas Segitiga : ";
	cin >> alas;
	
	cout << "Masukan Tinggi Segitiga : ";
	cin >> tinggi;
	
	cout << endl << "Luas Segitiga adalah : " << luasSegitiga(alas, tinggi) << endl;
	
}

int main(){
	
	tampilkanLuasSegitiga();
	
	system("pause");
	cin.get();
	return 0;
}






























/*
DIBUAT OLEH ARIF SYAHBANI KELAS X RPL TAHUN 2019 SEMESTER 2
TUGAS PEMROGRAMAN DASAR - PERSIAPAN UNTUK LSP
~ MENCARI LUAS SEGITIGA ~
*/
