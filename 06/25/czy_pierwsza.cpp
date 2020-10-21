// PRZYPOMNIENIE PISOC KLAMYRKI
#include <iostream>
using namespace std;

bool czyPierwsza(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        } 
    }
    return true;
}


int pierwsze[10000];

int main() {
    int n;
    int znalezione = 0;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        if (czyPierwsza(i)) {
            pierwsze[znalezione] = i;
            znalezione++;
            cout << i << " ";
        } 
    }
    return 0;
}