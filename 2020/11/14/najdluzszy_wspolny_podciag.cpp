#include <iostream>

using namespace std;

/*

Na wejsciu otrzymujemy dwa slowa
zlozone z liter malegpo alfabetu ang.
jaki jest najdluzyszy wspolny podciag tych dwoch slow

n, m <= 1000
*/


int wyniki[1001][1001];


int main() {
    string slowo1;
    string slowo2;

    cin >> slowo1 >> slowo2;

    for (int i = 1; i <= slowo1.size(); i++) {
        // i jest dlugoscia prefiksu slowa1
        for (int j = 1; j <= slowo2.size(); j++) {
            // j jest dlugoscia prefiksu slowa2 
            // chcemu obliczyc dlugosc najdluzszego wspolnego podc.
            // dla prefiksu slowa1 o dlugosci i
            // oraz prefiksu slowa2 o dlugosci j
            // ten wynik bedziemy trzymali w wyniki[i][j]
            
            wyniki[i][j] = max(wyniki[i-1][j], wyniki[i][j-1]);

            if (slowo1[i-1] == slowo2[j-1]) {
                wyniki[i][j] = max(wyniki[i][j], wyniki[i-1][j-1]+1);
            }
        }
    }


    cout << wyniki[slowo1.size()][slowo2.size()];

    return 0;
}