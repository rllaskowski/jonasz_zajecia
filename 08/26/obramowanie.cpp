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

 0 1 2 3 
11 . . 4
10 . . 5
 9 8 7 6
*/

int gdziePrzejdzie(int p, int n, int k) {
    return ((p-k) % n + n )% n;
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
    pair<int, int> xy;
    xy.first = 1;
    xy.second = 3;


    return x;
}


int main() {
    int n;
    int k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tab[i][j];
        }
    }
    return 0;
}