#include <iostream>

using namespace std;

/*


6 7 -10 2 3 6 -20  1 2  3....
6 13 3  5 8 14 -6 -5 -3 0 

aktualnaSuma = 0
najelpszyWynik = 14


4 1 1 -7 20 15

suma = 35

poczatek = 5

najPoczatek = 5
najKoniec = 6
wynik = 35
*/

int main () {
    int n;
    int aktualna;
    int suma = 0;
    int wynik = 0;
    int aktpocz = 1;
    int najpocz = 1;
    int najkon = 2;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> aktualna;
        suma += aktualna;

        if (suma < 0) {
            suma = 0;
            aktpocz = i+1;
        }

        if (suma > wynik) {
            wynik = suma;
            najpocz = aktpocz;
            najkon = i;
        }
        
    }

    cout << wynik << " " << najpocz << " " << najkon;

    return 0;
}