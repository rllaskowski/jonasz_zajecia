#include <iostream>
using namespace std;



int ile_minimow(const vector<int>& liczby) {
  int ile = 0, minimum = liczby[0];
  for (int liczba : liczby) {
    if (liczba < minimum) {
      minimum = liczba;
      ile = 0;
    }
    if (liczba == minimum)
      ile++;
  }
  return ile;
}