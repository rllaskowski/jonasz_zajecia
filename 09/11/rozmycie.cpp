#include <iostream>

using namespace std;

char tab[300][300];


/*
00000
00200
02320
00200
*/
int main() {
    int n;
    int m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tab[i][j];
        }
    }
    for (char c = '3'; c > '1'; c--) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (tab[i][j] == c) {
                    if (j + 1 < m && tab[i][j+1] == '0') { //prawo
                        tab[i][j+1] = tab[i][j] - 1;
                    }

                    if (j - 1 >= 0 && tab[i][j-1] == '0') { // lewo
                        tab[i][j-1] = tab[i][j] - 1;
                    }

                    if (i - 1 >= 0 && tab[i-1][j] == '0') { // góra
                        tab[i-1][j] = tab[i][j] - 1;
                    }

                    if (i + 1 < n && tab[i+1][j] == '0') { // dół
                        tab[i+1][j] = tab[i][j] - 1;
                    }
                }
            }
        }
    }
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << tab[i][j];
        }
        cout << endl;
    }


    return 0;
}