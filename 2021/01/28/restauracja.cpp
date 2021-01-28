#include <iostream>

using namespace std;

int cena[1000001];
int kal[1000001];

int main() {
    int n, a, b;

    for (int i = 0; i < n; i++) {
        cin >> cena[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> kal[i];
    }


    /*
    gasiennica na poczatku bedzie za chuda - czyt. bedzie na 
    niej sumarycznie za malo kalorii

    a potem caly czas ilosc kalorii nie spadnie pozniej liczby a
    */

    int sumaKal = 0;
    int sumaP  = 0;
    int wynik = 1000000000;
    int kon = 0;

    for (int i = 0; i < n; i++) {
        sumaKal += kal[i];
        sumaP += cena[i];

        while (sumaKal - kal[kon] >= a) {
            sumaKal -= kal[kon];
            sumaP -= cena[kon];
            kon++;
        }

        /*
        Albo gasiennica jest ciagle za chuda
        Albo ilosc jej kalorii jest >= a
        */
    }


    return 0;
}