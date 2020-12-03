#include <iostream>

using namespace std;

typedef struct {
    int x;
    int y;
} drzewo;

drzewo drzewa[1001];

int main() {
    int n;
    int a = 1;
    int b = 2;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> drzewa[i].x;
        cin >> drzewa[i].y;
    }

    while (drzewa[a].y == drzewa[b].y) {
        b++;
    }

    for (int i = 1; i <= n-1; i++) {
        for (int j = i+1; j <= n; j++) {
            if (drzewa[i].y != drzewa[j].y) {
                int rIJx = abs(drzewa[i].x - drzewa[j].x);
                int rIJy = abs(drzewa[i].y - drzewa[j].y);

                /* a oraz b to numery dotychczas najlepszych drzew */
                /* Sprawdzmy czy drzewa i oraz j sa lepsze korzystajac ze wzoru
                podanego w zadaniu. Drzewa i j lepsze jesli dostaniemy mniejszy kąt */
                int rABx = abs(drzewa[a].x - drzewa[b].x);
                int rABy = abs(drzewa[a].y - drzewa[b].y);
            
                if (rIJy / rIJx < rABy / rABx) {
                    a = i;
                    b = j;
                }
            }
            

        }
    }

    



    return 0;
}