#include <iostream>

using namespace std;

/*

5 1
5 7 6 2 3
9 1 4 0 7
7 8 3 6 2
2 5 3 1 4
4 4 8 9 7
2 2

*/
int miasto[1001][1001];
int sumyKolumn[1001][1001];

int main() {
    int n, t;
    int a, b;
    int rWierszy;
    int koszt = 0;
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> miasto[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i-1 >= 0) {
                sumyKolumn[i][j] = sumyKolumn[i-1][j] + miasto[i][j];
            } else {
                sumyKolumn[i][j] = miasto[i][j];
            }
            
        }
    }

    for (int i = 0; i < t; i++) {
        // a to numer kolumny
        // b to numer wiersza
        cin >> a >> b;
        
        for (int j = 0; j <= min(a, b); j++) {
            koszt += sumyKolumn[b-j][a-j];
        }
        for (int j = 1; b-j >= 0 && a+j <= n-1; j++) {
            koszt += sumyKolumn[b-j][a+j];
        }
        cout << koszt << endl;
        koszt = 0;
    }


    return 0;
}