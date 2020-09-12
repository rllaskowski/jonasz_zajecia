#include <iostream>
#include <cmath>
using namespace std;

/*
Tylko liczby, ktore sa kwadratami liczb calkowitych
maja nieparzysta ilosc dzielnikow!!

Jakie liczby maja dokladnie 3 dzielniki?
4, 9, 25, 49, 121...
Są to kwadraty liczb pierwszych
4  = 2*2
9  = 3*3
49 = 7*7
121 =11*11
...

Ponieważ podane w zadaniu liczby sa <= 10^12
to obchodza nas tylko liczby pierwsze <= 10^6?
Dlaczego? Bo jesli liczba jest > 10^6 to jej kwadrat
jest > 10^12

1)Znajdzmy wszystkie liczby pierwsze ktore sa mniejsze od miliona
Jak? Sito Eratostenesa

czyZlozona[]: 
2 false
3 false
4 true
5 false
6 true
7 false
8 true
9 true
10 true
11 false
12 true
13 false
*/

bool czyZlozona[1000000];

void sito() {
    for (int i = 2; i < 1000000; i++) {
        if (czyZlozona[i] == false) {
            // liczba i jest pierwsza, wykreslmy jej wielokrotnosci
            for (int j = i*2; j < 1000000; j += i) {
                czyZlozona[j] = true;
            } 
        }
    }
}


int main() {
    int n;
    cin >> n;

    sito();
    for (int i = 2; i < sqrt(n); i++) {
        if (czyZlozona[i]  == false) {
            cout << i*i << endl;
        }
    }

    return 0;
}