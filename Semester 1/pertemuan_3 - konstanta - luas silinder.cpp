#include <iostream>
#define phi 3.14
using namespace std;

int main(){

	float jari_jari, tinggi, luas_alas, volume;

	cout << "mencari volume silinder..." << endl;

	cout << "masukan jari jari alas silinder = ";
	cin >> jari_jari;

	cout << "masukan tinggi silinder = ";
	cin >> tinggi;

	luas_alas = phi*jari_jari*jari_jari;
	volume = luas_alas*tinggi;

	cout << "luas alas = " << luas_alas << endl;
	cout << "volume = " << volume << endl;

	cin.get();
	return 0;
}
