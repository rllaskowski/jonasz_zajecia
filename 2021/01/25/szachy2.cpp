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
int LG[1000][1000];
int PG[1000][1000];
int PD[1000][1000];
int LD[1000][1000];

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
            LG[i][j] = plansza[i][j];
            if (i > 0) {
                LG[i][j] = max(LG[i-1][j], LG[i][j]);
            }
            if (j > 0) {
                LG[i][j] = max(LG[i][j-1], LG[i][j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = m-1; j >= 0; j--) {
            PG[i][j] = plansza[i][j];
            
            if (i > 0) {
                PG[i][j] = max(PG[i-1][j], PG[i][j]);
            }
            if (j < m-1) {
                PG[i][j] = max(PG[i][j+1], PG[i][j]);
            }
        }
    }

    for (int i = n-1; i >= 0; i--) {
        for (int j = m-1; j >= 0; j--) {
            PD[i][j] = plansza[i][j];

            if (i < n-1) {
                PD[i][j] = max(PD[i+1][j], PD[i][j]);
            }
            if (j < m-1) {
                PD[i][j] = max(PD[i][j+1], PD[i][j]);
            }
        }
    }

    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            LD[i][j] = plansza[i][j];
            
            if (i < n-1) {
                LD[i][j] = max(LD[i+1][j], LD[i][j]);
            }
            if (j > 0) {
                LD[i][j] = max(LD[i][j-1], LD[i][j]);
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int druga = 0;

            if (i > 0 && j > 0) {
                druga = max(druga, LG[i-1][j-1]);
            }
            if (i > 0 && j < m-1) {
                druga = max(druga, PG[i-1][j+1]);
            }
            if (i < n-1 && j < m-1) {
                druga = max(druga, PD[i+1][j+1]);
            }
            if (i < n-1 && j > 0) {
                druga = max(druga, LD[i+1][j-1]);
            }

            wynik = max(wynik, plansza[i][j] + druga);

        }
    }


    cout << wynik << endl;

    return 0;
}