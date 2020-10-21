#include <iostream>

using namespace std;

/*
minimalna = 1
pozycja = 2


krok 0:
6 5 1 2 5 1 2

krok 1: 
1 5 6 2 5 1 2

krok 2:
1 1 6 2 5 5 2

krok 3
1 1 2 6 5 5 2

krok 4
1 1 2 2 5 5 6

krok 5
1 1 2 2 5 5 6

...
krok n

1 1 2 2 5 5 6

n - ilosc liczb
x_1...x_n - ciag liczb do posrtowania

n + n-1+n-2+....1 = n*(n-1)/2 ~ n^2 
*/

int tab[1000000];

/* Zwraca pozycje najmniejszej liczby znajdujacej 
    sie w talicy tab na indeksie w przedziale <p,k> */
int znajdzPozycjeMin(int p, int k) {
    int najmniejsza = p;
    for (int i = p+1; i <= k; i++) {
        if (tab[i] < tab[najmniejsza]) {
            najmniejsza = i;
        }        
    }
    return najmniejsza;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    for (int i = 0; i < n-1; i++) {
        /* Chcemy zamienic liczbe na pozycji i
        z najmniejsza liczba po prawej stronie 
        czyli na miejscu z przedzialu <i, n-1> 
        */
        int pozycja = znajdzPozycjeMin(i, n-1); 
        swap(tab[i], tab[pozycja]);
    }

    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
    return 0;
}