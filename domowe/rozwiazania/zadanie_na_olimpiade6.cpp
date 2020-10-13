#include <iostream>
using namespace std;

void wypisuj(int n) {
  if (n == 0) {
    cout << "*" << endl;
    return;
  }
  wypisuj(n - 1);
  wypisuj(n - 1);
}


int main() {
    int n = 6;
    wypisuj(n);
}