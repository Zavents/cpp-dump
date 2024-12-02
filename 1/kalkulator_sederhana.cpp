#include <iostream>
using namespace std;

// Fungsi
float penjumlahan(float a, float b){
	return a + b;
}

void tampil_jumlah(float a, float b){
	cout << "Hasil penjumlahan = " << penjumlahan(a,b) << endl;
}

float pengurangan(float a, float b){
	return a - b;
}

void tampil_kurang(float a, float b){
	cout << "Hasil pengurangan = " << pengurangan(a,b) << endl;
}

float pembagian(float a, float b){
	return a / b;
}

void tampil_bagi(float a, float b){
	cout << "Hasil pembagian = " << pembagian(a,b) << endl;
}

float perkalian(float a, float b){
	return a * b;
}

void tampil_kali(float a, float b){
	cout << "Hasil perkalian = " << perkalian(a,b) << endl;
}

int main(){
	utama:
	int pilihan;
	cout << "selamat datang di kalkulator sederhana!" << endl;
	cout << "Pilih operator yang akan digunakan " << endl;
	cout << "1. Penjumlahan\n2. Pengurangn\n3. Pembagian\n4. Perkalian" << endl;
	cout << "Pilih = ";
	cin >> pilihan;

	float angkaPertama;
	cout << "Masukan angka pertama = ";
	cin >> angkaPertama;

	float angkaKedua;
	cout << "Masukan angka kedua = ";
	cin >> angkaKedua;

	if(pilihan == 1){
		tampil_jumlah(angkaPertama, angkaKedua);
	} else if(pilihan == 2){
		tampil_kurang(angkaPertama, angkaKedua);
	} else if(pilihan == 3){
		tampil_bagi(angkaPertama, angkaKedua);
	} else if(pilihan == 4){
		tampil_kali(angkaPertama, angkaKedua);
	} else{
		cout << "operator yang anda masukan salah !" << endl;
		system("pause");
		goto utama;
	}

	cout << endl << endl;

	int pilihan2;
	cout << "Ulangi?" << endl;
	cout << "1. Ya\n2. Tidak"<<endl;
	cout << "Pilih = ";
	cin >> pilihan2;

	if(pilihan2 == 1){
		system("cls");
		goto utama;
	} else if(pilihan2 == 2){
		return 0;
	}

	system("pause");
	return 0;
}
