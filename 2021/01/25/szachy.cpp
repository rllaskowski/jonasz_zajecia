#include <iostream>
using namespace std;

int plansza[1000][1000];

/*

5 6
3 4 2 6 7 6
5 6 4 7 4 3
7 9 4 2 5 2
5 3 8 9 3 2
6 5 7 2 8 1

*/
int main() {
    int n, m;
    int wynik = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> plansza[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // tu stoi 1 wieza
            for (int c = 0; c < n; c++) {
                for (int d = 0; d < m; d++) {
                    if (i != c && j != d) {
                        wynik = max(wynik, plansza[i][j] + plansza[c][d]);
                    }
                }
            }
        }
    }

    cout << wynik << endl;

    return 0;
}