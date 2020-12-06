#include <iostream>

using namespace std;

typedef struct {
    int x;
    int y;
    int nr;
} drzewo;

drzewo drzewaL[1001];
drzewo drzewaP[1001];
drzewo drzewa[2001];

int main() {
    int n;
   
    cin >> n;
    int x, y;
    
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;

        if (drzewaL[y].nr == 0 || x < drzewaL[y].x) {
            drzewaL[y].x = x;
            drzewaL[y].nr = i;
        }

        if (drzewaP[y].nr == 0 || x > drzewaP[y].x) {
            drzewaP[y].x = x;
            drzewaP[y].nr = i;
        }
    }
    
    n = 0;

    for (int i = 1; i < 1001; i++) {
        if (drzewaL[i].nr != 0) {
            drzewa[n] = drzewaL[i];
            drzewa[n].y = i;
            n++;
        }
        
        if (drzewaP[i].nr != drzewaL[i].nr && drzewaP[i].nr != 0) {
            drzewa[n] = drzewaP[i];
            drzewa[n].y = i;
            n++;
        }
    }

    int a = 0;
    int b = 1;
    
    while (drzewa[a].y == drzewa[b].y) {
        b++;
    }

    for (int i = 0; i <= n-2; i++) {
        for (int j = i+1; j < n; j++) {
            if (drzewa[i].y != drzewa[j].y) {
                int rIJx = abs(drzewa[i].x - drzewa[j].x);
                int rIJy = abs(drzewa[i].y - drzewa[j].y);

                /* a oraz b to numery dotychczas najlepszych drzew */
                /* Sprawdzmy czy drzewa i oraz j sa lepsze korzystajac ze wzoru
                podanego w zadaniu. Drzewa i j lepsze jesli dostaniemy mniejszy kąt */
                int rABx = abs(drzewa[a].x - drzewa[b].x);
                int rABy = abs(drzewa[a].y - drzewa[b].y);
            
                if (rIJy*rABx < rABy*rIJx) {
                    a = i;
                    b = j;
                }
            }
        }
    }
    

    
    cout << drzewa[a].nr << " " <<  drzewa[b].nr;

    return 0;
}