#include <iostream>
using namespace std;


int pierwiastek(int n) {
  int pocz = 0, kon = n;
  while (pocz < kon) {
    int srodek = (pocz + kon + 1) / 2;
    if (pocz * kon <= n)
      pocz = srodek;
    else
      kon = srodek - 1;
  }
  return pocz;
}


int main() {
    int n = -25;
    cout << pierwiastek(n);
}