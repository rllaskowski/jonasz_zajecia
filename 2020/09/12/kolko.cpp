#include <iostream>

using namespace std;

char tab[100][100];
int x, y;
int n;
/*
ABC
H D
GFE

*/
void zrobKrok() {
    /* modyfikuje zmienne x,y ktore
    sa wspolrzednymi daniela tak aby zrobil on jeden krok */
    if (x == 0 && y != n-1) {
        y++;
    } else if (y == n-1 && x != n-1) {
        x++;
    } else if (x == n-1 && y != 0) {
        y--;
    } else {
        x--;
    }
}

int main() {
    cin >> n;
    x = 0;
    y = 0;
    char litera = 'A';
    
    for (int i = 0; i < n*4-4; i++) {
        tab[x][y] = litera;
        zrobKrok();
        litera++;
        if (litera > 'Z') {
            litera = 'A';
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == n-1 || i == n-1 || j == 0) {
                cout << tab[i][j];
            } else {
                cout << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}