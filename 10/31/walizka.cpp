#include <iostream>


using namespace std;

int wyniki[5001][10001];

int main() {
    int n, k;
    int r, w;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> r >> w;

        // i jest numerem nowego przedmiotu
        // oraz i jest iloscia dostepnych na razie przedmiotow
        // po trzecie i jest numerem wiersza w tablicy wyniki, ktory
        // bedziemy obliczac

        for (int j = 1; j <= k; j++) {
            // j jest rozmiarem plecaka, dla ktorego chce obliczyc wynik
            // wynik jest conajmniej taki sam jak dla mniejszej ilosci przedmiotw
            wyniki[i][j] = wyniki[i-1][j];

            if (j >= r) {
                // nowy przedmiot moze sie zmiesic w plecaku o rozmiarze j
                // zobaczmy ze warto go tam wsadzac
                if (wyniki[i-1][j-r] + w > wyniki[i-1][j]) {
                    wyniki[i][j] = wyniki[i-1][j-r] + w;
                }
            }
        }
    }

    cout << wyniki[n][k];

    return 0;
}
