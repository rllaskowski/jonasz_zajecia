#include <iostream>

using namespace std;

int plansza[501][501];
pair <int, int> waz[500000]; // .first - numer wiersza, .second - numer kolumny

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

    waz[1] = make_pair(1, 1);

    int wynik = 0;

    for (int i = 0; i < n; i++) {
        cin >> kierunek;
        for (int j = m; j > 1; j--) {
            waz[j] = waz[j-1];
        }

        if (kierunek == 'N') {
            waz[1].first -= 1;
        } else if (kierunek == 'E') {
            waz[1].second += 1;
        } else if (kierunek == 'S') {
            waz[1].first += 1;
        } else {
            waz[1].second -= 1;
        }

        for (int j = 1; j <= min(i+2, m); j++){
            if (plansza[waz[j].first][waz[j].second] == j) {
                wynik++;
            }
        }
        cout << wynik << " ";
        wynik = 0;
    }

    return 0;
}