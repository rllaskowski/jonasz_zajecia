#include <iostream>


using namespace std;


/*
.S.....
.##.##.
.##.##.
.......
.##.#..
.##.##.
....K..

1012345
2##3##6
3##4##7
4565678
5##6#89
6##7##!         
7898K#@         
*/

char labirynt[300][300];
int odl[300][300];
bool odw[300][300];
int n;
int m;

void wypiszOdl() {
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (labirynt[i][j] == '.') {
                if (odw[i][j] == true) {
                    cout << odl[i][j];
                }  else {
                    cout << "-";
                }
            } else {
                cout << "#";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> labirynt[i][j];

            if (labirynt[i][j] == 'S') {
                odw[i][j] = true;
                odl[i][j] = 0;
                labirynt[i][j] = '.';
            }
        }
    }

    wypiszOdl();
    for (int c = 0; c < n*m; c++) {
        cout << "Wypelnie teraz komorki w odleglosci " << c+1 << " od zrodla" << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (odl[i][j] == c && odw[i][j] == true) {
                    if (j + 1 < m && labirynt[i][j+1] != '#' && odw[i][j+1] == false) { //prawo
                        odl[i][j+1] = odl[i][j] + 1;
                        odw[i][j+1] = true;
                    }

                    if (j - 1 >= 0 && labirynt[i][j-1] != '#' && odw[i][j-1] == false) { // lewo
                        odl[i][j-1] = odl[i][j] + 1;
                        odw[i][j-1] = true;
                    }

                    if (i - 1 >= 0 && labirynt[i-1][j] != '#' && odw[i-1][j] == false) { // góra
                        odl[i-1][j] = odl[i][j] + 1;
                        odw[i-1][j] = true;
                    }

                    if (i + 1 < n && labirynt[i+1][j] == '.'&& odw[i+1][j] == false ) { // dół
                        odl[i+1][j] = odl[i][j] + 1;
                        odw[i+1][j] = true;
                    }
                }
            }
        }
        wypiszOdl();
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (labirynt[i][j] == 'K' && odw[i][j]) {
                cout << "Odleglossc od zrodla do konca wynosi " << odl[i][j] << endl;
                return 0;
            }
        }
    }

   

    return 0;
}