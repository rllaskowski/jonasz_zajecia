#include <iostream>
using namespace std;

/*
tablica z informacja czy liczba jest zlozona

2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    x   x   x x  x     x     x  x  x     x     x
*/

bool zlozona[1000000];
int pierwsze[1000000];

void sito(int n) {
    int ileP = 0;
    for (int i = 2; i <= n; i++) {
        if (zlozona[i] == false){
            /* w takim razie liczba i jest liczbą pierwszą */
            pierwsze[ileP] = i;
            ileP++;
            for (int j = i * 2; j <= n; j += i) {
                /* wykreślamy wielokrotności i */
                zlozona[j] = true;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    sito(n);
    return 0;
}
