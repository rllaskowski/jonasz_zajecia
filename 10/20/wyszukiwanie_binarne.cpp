#include <iostream>

using namespace std;

/*
Dana jest tablica posortowanych liczb dlugosci n
dla kazdego z t testow odpowiedz na pytanie na jakim insdeksie znajduje się liczba a 
w podanej tablicy

Wejscie:
n
n liczb ...
t
t testow ... 

t <= 10^6
n <= 10^6
*/

int tab[1000001];

int szukaj (int a, int n) {
    int p = 0;
    int k = n-1;
    int s;

    while (p <= k) {
        s = (p+k) / 2;
        if (tab[s] < a) {
            p = s+1;
        } else if (tab[s] > a) {
            k = s-1;
        } else {
            return s;
        }
    }

    return -1;
}



int main() {
    int n, t;
    int a;
    
    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    for (int i = 0; i < t; i++) {
        cin >> a;
        cout << szukaj(a, n) << endl;
    }



    return 0;
}