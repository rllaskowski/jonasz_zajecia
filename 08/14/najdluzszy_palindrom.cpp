#include <iostream>


using namespace std;

/*
Dla podanego slowa znalezc najdluzszy spojny podciag, taki ze jest on palindromem
Wejscie: n - dlugosc slowa oraz slowo

0123456789
abbabaaaba
      .
i = 6
6,7  i, i+1
5, 8 i-1, i+2
4, 9 i-2, i+3
3,10
*/

int main() {
    int n;
    string slowo;

    cin >> n;
    cin >> slowo;

    int wynik = 0;

    for (int i = 0; i < n; i++) {
        /* Chcemy znalezc najdluzszy palindrom z srodkowa litera na pozycji i */
        int k = 0; // o ile literek na razie przedluzylismy w jedna strone

        while (i-k-1 >= 0 && i+k+1 < n && slowo[i-k-1] == slowo[i+k+1]) {
            k++;
        }
        wynik = max(wynik, k*2+1);
    }

    for (int i = 0; i < n; i++) {
        /* Chcemy znalezc najdluzszy palindrom z srodkowa litera na pozycji i */
        int k = 0; // o ile literek na razie przedluzylismy w jedna strone

        while (i-k >= 0 && i+k+1 < n && slowo[i-k] == slowo[i+k+1]) {
            k++;
        }
        wynik = max(wynik, k*2);
    }

    cout << wynik;

}