#include <iostream>


using namespace std;

int tab[1000][1000];

void maluj(int w, int k, int c, int r) {
   for (int i = w; i < w + r; i++) {
       for (int j = k; j < k + r; j++) {
           tab[i][j] = c;
       }
   }
}

int main() {
    int n;
    int m;

    cin >> n >> m;
    int N = n;
    int M = m;
    int wspolW = 0; // numer wiersza kolejnego kwadratu
    int wspolK = 0;  // numer kolumny kolejnego kwadratu
    int c = 2;
    
    maluj(0, 0, 1, min(n, m));

    while (n != m) {
        if (n < m) {
            m -= n;
            wspolK += n;
            maluj(wspolW, wspolK, c, n);
        } else {
            n -= m;
            wspolW += m;
            maluj(wspolW, wspolK, c, m);
        }
        c++; 
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
