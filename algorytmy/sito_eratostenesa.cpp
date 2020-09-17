/*
Sito Eratostenesa
*/


#include <iostream>

using namespace std;

bool czyZlozonona[1000000];

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
    
    cin >> n;

    sito(n);
    return 0;
}