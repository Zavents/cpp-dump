#include <iostream> //memasukan file header iostream // iostream adalah sebuah file header

using namespace std; //misalnya jika kita memakai ini, kita tidak perlu repot repot membuat std::cout

int main(){ //sebuah gerbang untuk memulai gerbang
	int a,b,c; // mendeklarasikan bahwa a, b, dan c adalah sebuah variabel
	int hasil; // mendeklarasikan bahwa hasil adalah sebuah variabel
	
	a = 5; // nilai variabel a adalah 5
	b = 6; // nilai variabel b adalah 6
	c = a + 1; //kita membuat nilai dari variabel c adalah a + 1
	hasil = c-b;  // kita membuat nilai dari variabel hasil adalah c - b
	
	cout << hasil; // kita mengeluarkan nilai dari variabel hasil ke console
	
	return 0; // menghentikan program
}


