#include<iostream>
using namespace std;
/*
  w tablicy czyWczytana[x] trzymam inf.
  czy wczytałem już liczbę x
*/
bool czyWczytana[100001];

int main() {
  int n;
  int liczba; 
  int wynik = 0;
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> liczba;
    
    /*  ponieważ liczby są z zakresy <-50000, 50000>
        to do kazdej wczytanej liczby dodajemy 50000
        żeby uniknąc indeksów ujemnych  */
    if (czyWczytana[liczba+50000] == false) {
        //liczba nie byla nigdy wczesniej wczytana
      czyWczytana[liczba+50000] = true;
      wynik++;
    }  
  }
  cout << wynik;
  return 0;
}