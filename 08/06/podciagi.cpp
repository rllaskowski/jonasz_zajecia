#include <iostream>

using namespace std;


/*
5
indeksy:    0 1  2 3  4   5   6   7
ciag:       3 5  8 2  4   6   2   9
suma pref:  3 8 16 18 22 28  30  39 
reszta p 5: 3 3  1  3  2  3   0   4

3 0 3 2 4 1 2 4

6 + 7 = 13
1 + 2 = 3

5+5 = 10
0+0 = 0
  _
5 = 0(mod 5)

13 = 8 (mod 5)

i = 1
suma = 0
j = 1
wynik = 1

podciag pusty
5
8, 2
4, 6
8,2,4,6

n
n*n



*/

int tab[1000000];


int main() {
    int n;
    int m;
    int wynik = 1;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    for (int i = 0; i < n; i++) {
        // szukamy podciagow ktore zaczynaja sie w miejscu 
        // o indeksie i
        long long suma = 0;
        for (int j = i; j < n; j++) {
            suma += tab[j];
            if (suma % m == 0) {
                wynik++;
            }
        }
    }

    cout << wynik << endl;

    return 0;
}