#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

  int a;

  cout << "masukan umur anda" << endl;
  cin >> a;

  if(a >= 15){
    cout << "anda telah dewaasa" << endl;
  } else if(a < 15 && a != 0){
    cout << "anda masih LOLI" << endl;
  } else {
    cout << "input yang anda masukan salah" << endl;
  }
  system("pause");
  system("cls");
  return main();
}
