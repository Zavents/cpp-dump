#include <iostream>
using namespace std;

int main(){

	int n;
	cout << "Masukan sebuah bilangan = ";
	cin >> n;

	cout << "\nTabel perkaliannya adalah: " << endl;

	for(int i = 1; i <= 10; i++){
		cout << n << " x " << i << " = " << n * i << endl;
	}

	system("pause");
	return 0;
}
