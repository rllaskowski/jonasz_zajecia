#include <iostream>
using namespace std;


int lista[50000];

int najwiekrze (int n) {
    int najwiekrza = 0;
    for (int i = 0; i < n; i++) {
        if (lista[i] > najwiekrza) {
            najwiekrza = lista[i];
        }
    }
    return najwiekrza;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n+1; i++) {
        cin >> lista[i];
    }
    cout << najwiekrze (n);
    return 0;
}