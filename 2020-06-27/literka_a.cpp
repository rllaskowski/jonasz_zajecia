#include <iostream>
using namespace std;


int main() {
    int n;
    string slowo;
    cin >> n;
    cin >> slowo;
    int najpocz = 0;
    int najkon = 0;
    
    for (int i = 0; i < n; i++) {
        /* poszerzamy podslowo zaczynajace się na indeksie i  w prawo dopoki mozemy
        czyli nie przekraczamy wpisanego slowa oraz podslowo zawiera
        maksymalnie jedną literę a */ 
        int kon = i;
        int ileA = 0;

        while (kon < n && ileA < 2) {
            if (slowo[kon] == 'a') {
                ileA++;
            }
            if (ileA < 2) {
                kon++;
            }
        }
        /* kon indeks pierwszej za poprawnym slowem 
        więc i to początek dobrego znalezionego slowa
        a kon-1 to jego koniec
        */

        /* najkon-najpocz+1 to dlugosc dotychczas najlepszego podslowa 
            (kon-1)-i+1 to dlugosc nowego znalezionego podslowa
        */
        if (najkon-najpocz+1 < kon-i) {
           // znalezlismy nowy najlepszy wynik
            najpocz = i;
            najkon = kon - 1;
        }

    }

    cout << najkon - najpocz + 1 << endl;
    for (int i = najpocz; i <= najkon; i++) {
        cout << slowo[i];
    }
    cout << endl;
    return 0;
}