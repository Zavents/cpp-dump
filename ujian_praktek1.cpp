//And or
#include <iostream>
using namespace std;

int main(){
	int a,b;
	a = 0;
	b = 1;

	cout << (a && b) << endl;
	cout << (a && a) << endl;
	cout << (b && a) << endl;
	cout << (b && b) << endl << endl;

	cout << (a||b) << endl;
	cout << (a||a) << endl;
	cout << (b||a) << endl;
	cout << (b||b) << endl;

	return 0;

}
