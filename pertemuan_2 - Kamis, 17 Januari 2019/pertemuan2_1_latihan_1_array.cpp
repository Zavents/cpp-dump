#include <iostream>
using namespace std;

int main(){

	int K[1000];
	int n;

	cout << "\nBanyaknya jumlah elemen pada array = "; //misalnya 2
	cin >> n;

	cout << endl;

	for(int i = 0; i < n ; i++){
		cout << "Nilai pada index [" << i << "] = ";
		cin >> K[i];
	}


	for(int i = 0; i < n; i++){
		cout << "\nIsi elemen pada index [" << i <<"] = " << K[i];
	}

	cout << endl << endl;
	
	system("pause");

	// 1 2 3 4 5

	cin.get();
	return 0;
}
