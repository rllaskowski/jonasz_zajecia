#include <iostream>


using namespace std;

int grzejnik[1000001];

int main() {
    int n, k;

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> grzejnik[i];
    }

    int kon = 0;
    int suma = 0;
    int wynik = 1000000000;

    for (int p = 0; p < n; p++) {
        // glowa weszla na nowy element
        suma += grzejnik[p];
        while (suma - grzejnik[kon] >= k) {
            suma -= grzejnik[kon];
            kon++;
        }

        if (suma >= k) {
            // to znaczy ze gasiennica jest dobra
            // czyli mozemy sprobowac poprawic nasz wynik jej dlugoscia
            wynik = min(wynik, p-kon+1); 
        }

    }

    if (suma >= k) {
        cout << wynik;
    } else {
        cout << 'NIE';
    }
    
    
    return 0;
}