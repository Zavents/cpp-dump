#include <iostream>
using namespace std;

double luas_segitiga(double alas, double tinggi);
void tampilkan_luas_segitiga(double alas, double tinggi);

int main(){
	cout << "latihan dari ibuk\n\n";
	cout << "mencari luas seigitiga\n";

	double tinggi, alas, luas;
	cout << "masukan panjang tinggi segitiga = ";
	cin >> tinggi;

	cout << "masukan panjang alas segitiga = ";
	cin >> alas;

	tampilkan_luas_segitiga(alas,tinggi);

	luas = (alas * tinggi)/2;
	cout <<"\n\nluas segitiga = " << luas;

	cout << "\n\n";

	cin.get();
	return 0;
}

double luas_segitiga(double alas, double tinggi){
	return (alas * tinggi)/2;
}	void tampilkan_luas_segitiga(double alas, double tinggi){
	cout << "\nluas segitiga adalah = " << luas_segitiga(alas, tinggi);
}