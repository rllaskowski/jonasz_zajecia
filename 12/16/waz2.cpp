#include <iostream>

using namespace std;

int plansza[501][501];
int liczby[500000];

int main() {
    int a, b;
    int m, n;
    char kierunek;
    cin >> a >> b;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            cin >> plansza[i][j];
        }
    }

    cin >> n >> m;

    int wynik = 0;
    pair<int, int> glowa = make_pair(1,1);
    
    for (int i = 0; i < n; i++) {
        cin >> kierunek;

        liczby[i] = plansza[glowa.first][glowa.second];

        if (kierunek == 'N') {
            glowa.first -= 1;
        } else if (kierunek == 'E') {
            glowa.second += 1;
        } else if (kierunek == 'S') {
            glowa.first += 1;
        } else {
            glowa.second -= 1;
        }
    }

    for (int i = 0; i < n; i++) {
        int gdzie = i+1; // gdzie jest segment

        for (int j = 1; j <= min(i+2, m); j++){
             // j to numer segmentu
             // skoro glowa jest na miejscu o numerze i+1

            if (liczby[gdzie] == j) {
                wynik++;
            }
            gdzie--;
        }
        cout << wynik << " ";
        wynik = 0;
    }

    liczby[n] = plansza[glowa.first][glowa.second];
    return 0;
}