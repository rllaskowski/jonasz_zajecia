#include <iostream>
using namespace std;


int funkcja(int a, int b) {
  if (b == 0) return 0;
  int h = funkcja(a, b / 2) * 2;
  if (b % 2 == 0) return h;
  return h + a;}


int main() {
    int a, b;
    cin >> a >> b;
    cout << funkcja(a, b);
}