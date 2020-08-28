#include <iostream>

using namespace std;

char tab[300][300];


/*
n = 4 k = -5
1 2 3  4   5  6  7 8 9 10 11 12
8 9 10 11 12  1  2 3 4  5  6  7

0 1 2  3  4 5 6 7 8 9 10 11
7 8 9 10 11 0 1 2 3 4  5  6


Ilosc liter na obwodzie kwadratu o boku n: 4n-4

n k
(x,y) ->  
n = 4
n-1
       
0 1 2 3 n-1  i=0     
11 . . 4 n    i=1
10 . . 5 n+1  i=2
 9 8 7 6 n+2  i=3

a na wspolrzednej (3,2)
(3,2) = 7 -> 10 = (0,2)


0 1 2 3 4 5 6 7 8 9 10 11

p -> ((p+k)%n+n)%n

*/

int gdziePrzejdzie(int p, int n, int k) {
    /* zwraca na jaka pozycje przejdzie litera ktora 
    byla wczesniej na pozycji p po przekreceniu o k miejsc */
    return ((p+k) % n + n )% n;
}

int jakaPozycja(int i, int j, int n) {
    if (i == 0) {
        return j;
    } else if (j == n-1) {
        return i + n - 1;
    } else if (i == n-1) {
        return n*3-3-j;
    } else {
        return n*4-4-i;
    }
}

pair<int, int> jakieWspolrzedne(int p, int n) {
    pair<int, int> xy; // xy.first to pierwsza wspolrzedna
    // xy.second to druga wspolrzednia
    if (p <= n-1) {
        xy.first = 0;
        xy.second = p;
    } else if (p <= n*2-2) {
        xy.first = p-(n-1);
        xy.second = n-1;
    } else if (p <= 3*n-3) {
        xy.first = n-1;
        xy.second = 3*n-3-p;
    } else {
        xy.first = 4*n-4-p;
        xy.second = 0;
    }

    return xy;
}

char wynik[1000][1000];

int main() {
    int n;
    int k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tab[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i==0 || i == n-1 || j==0 || j== n-1) {
                int p = jakaPozycja(i, j, n);
                int przesunieta = gdziePrzejdzie(p, 4*n-4, k);
                
                pair<int, int> wspolrzedne = jakieWspolrzedne(przesunieta, n);
                int noweI = wspolrzedne.first;
                int noweJ = wspolrzedne.second;
                wynik[noweI][noweJ] = tab[i][j];
            } else {
                wynik[i][j] = tab[i][j]; 
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << wynik[i][j];
        }
        cout << endl;
    }
    return 0;
}