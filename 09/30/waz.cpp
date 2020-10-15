#include <iostream>
#include <queue>

using namespace std;

/*
Kiedy na polu jest 'W' to to pole jest zajęte przez węża
kiedy jest J to na polu jest jabłko
kiedy . to pole jest puste

1) Wyliczamy nowe pole na którym ma znalzc się wąż
2) Sprawdzamy kolizje(czy waz uderzyl w sciane lub w siebie)
3) Sprawdz czy waz wchodzi na jabluszko, jesli tak zapamietaj to oraz usun jablko

*/

char plansza[1000][1000];
int n, m, r;
char kierunek;
queue< pair<int,int> > waz;
pair<int,int> glowa;


bool ruch() {
    if (kierunek == 'N') {
        glowa.first--;
    } else if (kierunek == 'E') {
        glowa.second++;        
    } else if (kierunek == 'S') {
        glowa.first++;
    } else {
        glowa.second--;
    }
    
    if (glowa.first < 0 || glowa.first >= n || glowa.second < 0 || glowa.second >= m ) {
        // wyszlismy poza planszę
        return false;
    }

    if (plansza[glowa.first][glowa.second] == 'W') {
        // weszlismy nową głową na węza
        return false;
    }

    plansza[glowa.first][glowa.second] = 'W';
    waz.push(glowa);

    if (plansza[glowa.first][glowa.second] == '.') {
        pair<int, int> koniecWeza = waz.front(); // wez wspolrzedne na ktorych znajduje sie koniec weza
        waz.pop(); // zdejmij te wspolrzedne z kolejki

        plansza[koniecWeza.first][koniecWeza.second] = '.';
    }
}

int main() {
    cin >> n >> m >> r;
    cin >> kierunek;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> plansza[i][j];
            if (plansza [i][j] == 'W') {
                waz.push(make_pair(i, j));
                glowa = make_pair(i, j);
            }
        }
    }

    char skret;

    for (int i = 1; i <= r; i++) {
        cin >> skret;

        if (skret == 'P') {
            if (kierunek == 'N') {
                kierunek = 'E';
            } else if (kierunek == 'E') {
                kierunek = 'S';
            }  else if (kierunek == 'S') {
                kierunek = 'W';
            } else {
                kierunek = 'N';
            } 
        } else if (skret == 'L'){
            if (kierunek == 'N') {
                kierunek = 'W';
            } else if (kierunek == 'E') {
                kierunek = 'N';
            }  else if (kierunek == 'S') {
                kierunek = 'E';
            } else {
                kierunek = 'S';
            } 
        }
        if (ruch() == false) {
            cout << i << endl;
        
            return 0;
        }
    }

    cout << "OK";
    return 0;
}