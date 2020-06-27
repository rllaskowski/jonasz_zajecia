/* 
Optymalne rozwiązanie zadania "Litera a" wykorzystujące metodę gąsienicy.
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
    
    int kon = 0;    /* gdzie jest koniec gasiennicy */
    int ileA = 0;   /* ile liter 'a' na gąsiennicy */

    for (int g = 0; g < n; g++) {
        if (slowo[g] == 'a') {
            /* gąsiennica przesuneła głowę na literkę 'a' */
            ileA++;
        }

        while (ileA > 1) {          
            /* przesuwamy koniec gąsiennicy dopóki znajduje się na niej
            za dużo liter 'a' */ 
            if (slowo[kon] == 'a') {
                /* litera 'a' znika z końca gąsiennicy */
                ileA--;
            }
            kon++;
        }

        if (ileA == 1 && najkon-najpocz+1 < g-kon+1) {
            /* znalezlismy nowy najlepszy wynik */
            najpocz = kon;
            najkon = g;
        }
    }

    cout << najkon-najpocz+1 << endl;
    
    for (int i = najpocz; i <= najkon; i++) {
        cout << slowo[i];
    }
    cout << endl;

    return 0;
}