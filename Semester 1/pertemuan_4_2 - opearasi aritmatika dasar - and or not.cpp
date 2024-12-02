// OPERATOR LOGIKA AND, OR, DAN NOT

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

	int x, y;
	x = 10;
	y = 3;

	// OPERASI ARITMETIKA
	system ("cls");
	system ("COLOR A");
	cout << "diketahui x = 10, y = 3\n" << endl;
	cout << "penjumlahan x dan y = " << x + y << endl;
	cout << "pengurangan x dan y = " << x - y << endl;
	cout << "perkalian x dan y = " << x * y << endl;
	cout << "pembagian x dan y = " << x / y << endl;
	cout << "modulus x dan y = " << x % y << endl << endl << endl;
	cout << "'enter' untuk AND OR dan NOT" << endl;

	cin.get();
	system ("cls");
	system ("COLOR B");
	int a = 0;
	int b = 1;

	cout << "diketahui a = 0, b = 1" << endl << endl;

	// AND
	cout << "AND, a dan a = " << (a && b) << endl;
	cout << "AND, a dan b = " << (a && b) << endl;
	cout << "AND, b dan a = " << (b && a) << endl;
	cout << "AND, b dan b = " << (b && b) << endl << endl;

	// OR
	cout << "OR, a dan a = " << (a || a) << endl;
	cout << "OR, a dan b = " << (a || b) << endl;
	cout << "OR, b dan a = " << (b || a) << endl;
	cout << "OR, b dan b = " << (b || b) << endl << endl;

	// NOT
	cout << "NOT, a dan a = " << !(a == a) << endl;
	cout << "NOT, a dan b = " << !(a == b) << endl;

	cin.get();
	system ("cls");
	return 0;
}
