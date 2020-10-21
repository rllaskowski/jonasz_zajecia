/*

Algorytm wyszukiwania binarnego wartości
w posortowanej tablicy 


*/

#include <iostream>
#include <algorithm>

using namespace std;

int n;
int tab[1000000];

int szukaj(int x) {
    int p = 0;
    int k = n-1;
    int s;

    while (p <= k) {
        s = (p+k)/2;

        if (tab[s] < x) {
            p = s+1;
        } else if (tab[s] > x) {
            k = s-1;
        } else {
            return s;
        }
    }

    return -1;
}


int main() {
    int t, x;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    sort(tab, tab+n);

    for (int i = 0; i < t; i++) {
        cin >> x;

        int pozycja = szukaj(x);

        if (pozycja != -1) {
            cout << pozycja << endl;
        } else {
            cout << "NIE" << endl;
        }
    }
    return 0;
}