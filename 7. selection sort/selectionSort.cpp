#include <iostream>
using namespace std;

int main(){

	int a[6] = {3, 21, 4, 7, 11, 23};
	int n = 6;
	int i, j, k, p, t;
	
	cout << "p = 1, data = \n";
	
	for(k = 0; k < n; k++){	
		cout << "nilai = " << a[k] << endl;
	}
	
	for(i = 0; i < n; i++){
		p = i;
		for(j = i+1; j < n; j++){
			if(a[j] > a[p]){
				p = j;
			}
		}
		
		cout << "p = " << i+2 << ", data : " << endl;
		
		if(p != i){
			t = a[p];
			a[p] = a[i];
			a[i] = t;
		}
		for(k = 0; k < n; k++){
			cout << "nilai = " << a[k] << endl;
		}
	}
	
	system("pause");
	cin.get();
	return 0;
}






























/*
DIBUAT OLEH ARIF SYAHBANI KELAS X RPL TAHUN 2019 SEMESTER 2
TUGAS PEMROGRAMAN DASAR - PERSIAPAN UNTUK LSP
~ SELECTION SORT ~
*/
