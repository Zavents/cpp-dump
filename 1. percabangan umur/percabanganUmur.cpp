#include <iostream>
using namespace std;

void Hasil(int x, int y){
	if(x == 1){
		if(y >= 17){
			cout << "Pria Dewasa";
		}
		else{
			cout << "Perjaka";
		}
	}
	else{
		if(y >= 17){
			cout  << "Wanita dewasa";
		}
		else{
			cout << "Gadis";
		}
	}
}
int main(){
	int umur, kel;
	
	cout << "Jenis Kelamin" << '\n';
	cout << "1. Laki - Laki" << '\n';
	cout << "2. Perempuan" << '\n';
	cout << "Masukan Pilihan Anda (1-2) : ";
	cin >> kel;
	
	cout << "Masukan umur anda (1-100) : ";
	cin >> umur;
	
	Hasil(kel, umur);
	
	system("pause");
	
	cin.get();
	return 0;
}






























/*
DIBUAT OLEH ARIF SYAHBANI KELAS X RPL TAHUN 2019 SEMESTER 2
TUGAS PEMROGRAMAN DASAR - PERSIAPAN UNTUK LSP
~ PERCABANGAN TENTANG UMUR PRIA DAN WANITA ~
*/
