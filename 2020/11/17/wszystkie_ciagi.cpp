#include <iostream>

using namespace std;

int tab[20];
int n; // ile cyfr chcemy postawic

void postawC(int miejsce) {
    /*
    Po wywolaniu tej funkcji
    ustawimy w tablicy tab od indeksu miejsce
    wszystkie mozliwe ciagi zer i jedynek i wypiszemy je
    */
    if (miejsce == n) {
        // postawilismy jakies zera i jedynki w wszystkie miejsca
        //tablicy od 0 do n-1
        // wypiszmy zawartosc tablicy
        for (int i = 0; i < n; i++) {
            cout << tab[i];
        }
        cout << endl;
    } else {
        tab[miejsce] = 0;
        postawC(miejsce+1); // to wywolanie ma ustawic zera i jedynki dalej
        tab[miejsce] = 1;
        postawC(miejsce+1);
    }
}

int main() {
    cin >> n;
    postawC(0);

    return 0;
}