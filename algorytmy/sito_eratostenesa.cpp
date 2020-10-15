/* Sito Eratostenesa - znajdowanie liczb pierwszych mniejszych od n */

#include <iostream>

using namespace std;

bool czyZlozonona[1000001];

void sito(int n) {
    for (int i = 2; i < n; i++) {
        if (!czyZlozonona[i]) {
            cout << i << endl;

            for (int j = i*2; j < n; j += i) {
                czyZlozonona[j] = true;
            }
        }
    }
}


int main() {
    int n;
    
    cin >> n; // zakladamy, że n < rozmiar tablicy czyZlozona

    sito(n);

    for (int i = 2; i <= n; i++) {
        if (!czyZlozonona[i]) {
            cout << i << endl;
        }
    }

    return 0;
}