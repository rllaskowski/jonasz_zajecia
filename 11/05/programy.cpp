#include <iostream>
#include <algorithm>

using namespace std;

int programy[1000001];
int plyty[1000001];


int main() {
    int n;
    int m;
    int wynik = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> programy[i];
    }
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> plyty[i];
    }

    sort(programy, programy+n);
    sort(plyty, plyty+m);

    int pl = 0;
    for (int pr = 0; pr < n; pr++) {
        while (pl < m && programy[pr] > plyty[pl]) {
            pl++;
        }
        if (pl < m) {
            pl++;
            wynik++;
        } else {
            break;
        }
    }
    
    cout << wynik;
    return 0;
}