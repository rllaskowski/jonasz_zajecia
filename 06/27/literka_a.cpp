/* 
Naiwne rozwiązanie zadania "Litera a".
Algorytm sprawdza wszystkie poprawne podsłowa przez poszerzanie podsłow
rozpoczynających się na każdym z indeksów
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    string slowo;

    cin >> n;
    cin >> slowo;
    
     /* gdzie znajduje się początek najlepszego słowa */
    int najpocz = 0; 
    /* gdzie znajduje się koniec najlepszego słowa */
    int najkon = 0;
    
    for (int i = 0; i < n; i++) {
        int kon = i;
        int ileA = 0;

        /* poszerzamy podsłowo zaczynające się 
        na indeksie i dopóki możemy */ 
        while (kon < n && ileA < 2) {
            if (slowo[kon] == 'a') {
                ileA++;
            }
            if (ileA < 2) {
                kon++;
            }
        }
        /* kon to indeks pierwszej litery za poprawnym podslowem */

        /* najkon-najpocz+1 to dlugosc dotychczas najlepszego podslowa 
        (kon-1)-i+1 to dlugosc nowego znalezionego podslowa */
        if (ileA == 1 && najkon-najpocz+1 < kon-i) {
           /* znalezlismy nowy najlepszy wynik */
            najpocz = i;
            najkon = kon-1;
        }

    }

    cout << najkon-najpocz+1 << endl;
    for (int i = najpocz; i <= najkon; i++) {
        cout << slowo[i];
    }
    cout << endl;
    return 0;
}