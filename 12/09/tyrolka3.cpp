#include <iostream>

using namespace std;

typedef struct {
    int x;
    int y;
    int nr;
} drzewo;

drzewo drzewaL[2000001];
drzewo drzewaP[2000001];

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

    int a=0, b=0; // najlepsza para
    long long rx = 0;   // w. bezw roznicy w x najlepszej pary
    long long ry = 0;  // w. bezw roznicye w y najlepszej pary
    long long rxa;
    long long rya;
    int ostatnie = 0;
    for (int i = 1; i <= 200000; i++) {
        if (drzewaL[i].x != 0 && ostatnie != 0) {
            rxa = abs(drzewaL[i].x - drzewaP[ostatnie].x);
            rya = i - ostatnie;

            if (a == 0 || rya * rx < rxa * ry) {
                a = drzewaL[i].nr;
                b = drzewaP[ostatnie].nr;
                rx = rxa;
                ry = rya;
            }

            rxa = abs(drzewaP[i].x - drzewaL[ostatnie].x);
            rya = i - ostatnie;

            if (a == 0 || rya * rx < rxa * ry) {
                a = drzewaP[i].nr;
                b = drzewaL[ostatnie].nr;
                rx = rxa;
                ry = rya;
            }
        }

        if (drzewaL[i].x != 0) {
            ostatnie = i;
        }
    }

    cout << a << " " << b;

    return 0;
}