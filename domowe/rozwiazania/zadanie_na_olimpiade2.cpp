#include <iostream>
using namespace std;

string generuj(int n) {
  if (n == 0) return "a";
  return string("b") + generuj(n - 1);
}

int main() {
    cout << generuj(3);
}