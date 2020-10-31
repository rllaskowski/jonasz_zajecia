#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int losuj(int a, int b) {
    return a + rand() % (b-a+1);
}

int main() {
    srand(time(NULL));
    int liczba;
    int odp;
    int b;

    cout << "Do jakiej liczby losowac? ";
    cin >> b;
  
    liczba = losuj(1, b);

    int tura = 0;

    cout << "Podaj odpowiedz. ";
    cin >> odp;

    while (liczba != odp) {
        if (odp < liczba) {
            cout << "Podana odpowiedz jest za mala. Podaj wiekrza odpowiedz. ";
            cin >> odp;
        } else if (odp > liczba) {
            cout << "Podana odpowiedz jest za duza. Podaj mniejsza odpowiedz. ";
            cin >> odp;
        }
        tura++;
    }

    cout << "Brawo! Udalo ci sie znalesc liczbe w " << tura << " turach.";

    return 0;
}