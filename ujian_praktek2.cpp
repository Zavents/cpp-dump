#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	system("color a");
	char a;

	cout << "tebak huruf = " << endl;
	cin >> a;

	if(a == 'a'){
		char c;
		system("cls");
		cout << "jawaban anda benar" << endl;
		//system("pause");	
		system("cls");
		cout << "ulangi lagi?" << endl;
		cin >> c;
		if (c == 'y'){
			system("cls");
			return main();
		} else if (c == 'n'){
			system("exit");
		}
	} else {
		char b;
		system("cls");
		cout << "jawaban anda salah" << endl;
		system("pause");
		system("cls");
		cout << "ulangi lagi?" << endl;
		cin >> b;
		if (b == 'y'){
			system("cls");
			return main();
		} else if (b == 'n'){
			system("exit");
		}
	

	}
	cin.get();
	return 0;
}