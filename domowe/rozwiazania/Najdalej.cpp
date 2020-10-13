#include <iostream>
using namespace std;

int tab[30];


int najwiekrze (int n) {
    int najwiekrza = 0;
    for (int i = 0; i < n; i++) {
        if (tab[i] > najwiekrza) {
            najwiekrza = tab[i];
        }
    }
    return najwiekrza;
}


int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    
    cout << (char)('a'+tab[najwiekrze(n)]);
    

    return 0;
}