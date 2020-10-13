#include <iostream>
using namespace std;

int main() {
int liczba = 3;
for (int i = 1; i <= 16; i = 2 * i)
  liczba = (3 * liczba + 1) / 2;
cout << liczba << "\n";
}