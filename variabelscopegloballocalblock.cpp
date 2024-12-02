#include <iostream>
using namespace std;

char x = 'g';

char x_local(){
	int x = 'l';
	return x;
}

char x_global(){
	int x = 'g';
	return x;
}

int main(){

	char x = 'l';
	cout << "1. menampilkan global = " << x_global() << endl;
	cout << "2. menampilkan local = " << x << endl;
	{
		char x = 'b';
		cout << "3. menampilkan block = " << x << endl;
	}

	cin.get();
	return 0;
}