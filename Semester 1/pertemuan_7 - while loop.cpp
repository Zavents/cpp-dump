//pertemuan 7 = Looping
#include <iostream>
using namespace std;

int main(){
  //while loop
  int a = 10;
  while(a >= 1){
    cout << "bahasa C++ " << a << endl;
    a--;
  }


  int i;
  while(i != 99){
    cout << "masukan sebuah bilangan = ";
    cin >> i;
    cout << "bilangan anda adalah = " << i << endl;
  }

  //do-while
  int x = 1;
  do{
    x++;
    cout << "belajar C++ " << x << endl;
  } while(x <= 10);



  cin.get();
  return 0;
}
