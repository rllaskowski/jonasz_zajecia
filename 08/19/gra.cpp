/* 
 
Jonasz i Robert graja w gre
Zaczyna Jonasz
 
n=6
i = 4
 
0 1 2 3 4 5
5 1 2 9 2 5
 
1 2 9 - wynik 10
2 9 2 - wynik 4
 
 
X 1 2 3  4 5  6
1 5 5 6 11 .  .
2 . 1 2 10 10 .
3 . . 2  9 4  .
4 . . .  9 9  11
5 . . .  . 2  5
6 . . .  . .  5
 
 
bez prawej
Zaczyna: 5, 2, 2 = 9
Drugi: 1, 9      = 10
 
 
Bez lewej
Zaczyna: 8, 2, 2 = 12
Drug: 1, 9 = 10
*/
 
#include <iostream>
 
using namespace std;
 
int wyniki[1000][1000];
int liczby[1000];
 
int suma(int a, int b) {
    int suma = 0;
    for (int i = a; i <= b; i++) {
        suma += liczby[i];
    }
    return suma;
}


int main() {
    int n;
    for (int i = 0; i < n; i++) {
        cin >> liczby[i];
        
        /* wyniki dla gier dlugosci 1 to po prostu wczytane liczby */
        wyniki[i][i] = liczby[i];
    }

    /* Zaczynamy od i = 2 (czyli dla gier dlugosci dwa) poniewaz juz wpisalismy 
    do tablicy wyniki wszystkie wyniki dla gier dlugosci 1 */
    for (int i = 2; i <= n; i++) {
        /* chcemy obliczyc wynik dla wszystkich gier dlugosci i */
        for (int j = 0; j <= n-i; j++) {
            /* obliczamy wynik dla gry rozpoczynajacej sie w miejscu j
            o dlugosci i */

            int p = j;
            int k = p+i-1;

            int lewyWynik = liczby[p]; // ilosc punktow ktore otrzynany biorac lewa liczbe
            /* gracz drugi otrzyma w grze od p+1 do k dokladnie wyniki[p+1][k] punktow
            lacznie w tej grze jest do orzymania suma(p+1,k ) punktow
            wiec my otrzymamy reszte */
            lewyWynik += suma(p+1, k) - wyniki[p+1][k];
            
            int prawyWynik = liczby[k];
            prawyWynik += suma(p, k-1) - wyniki[p][k-1];
            wyniki[p][k] = max(prawyWynik, lewyWynik);
        }
    }


    cout << wyniki[1][n];
    return 0;
}