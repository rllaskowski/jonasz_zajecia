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
int lewaPrzek[1001][1001];
int prawaPrzek[1001][1001];
int wyn[1001][1001];
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
            if (min(i, j) - 1 >= 0) {
                lewaPrzek[i][j] = lewaPrzek[i-1][j-1] + miasto[i][j];
            } else {
                lewaPrzek[i][j] = miasto[i][j];
            }
            
            if (min(i, j) - 1 >= 0) {
                prawaPrzek[i][j] = prawaPrzek[i-1][j-1] + miasto[i][j];
            } else {
                prawaPrzek[i][j] = miasto[i][j];
            }


            /*
            Chcemy obliczyc wynik dla pola (i, j) znajac wynik dla pola 
            (i-1,j) oraz wartosci na przekatnych
            */
            if (i-1 >= 0) {
                wyn[i][j] = wyn[i-1][j] + prawaPrzek[i][j] + lewaPrzek[i][j] - miasto[i][j];
            } else {
                wyn[i][j] = miasto[i][j];
            }
            

        }
    }

    for (int i = 0; i < t; i++) {
        // a to numer kolumny
        // b to numer wiersza
        cin >> a >> b;
        cout << wyn[b][a] << endl;
    }


    return 0;
}