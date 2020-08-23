#include <iostream>

using namespace std;


/*
n = 5 w = 2

wynikMax = 3
wynikAkt = 1

1
----
4
5
7
----
10 

*/

int tab[10000];

int main() {
    int n;
    int w;
    int aktWynik = 1; // aktualny wynik
    int wynik = 0;// najlepszy wynik
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    for (int i = 1; i < n; i++) {
        if (tab[i] - tab[i-1] <= w) {
            // poprzednia kostka przewroci i-tą kostke
            aktWynik++;
        } else {
            wynik = max(wynik, aktWynik);
            aktWynik = 1;
        }
    }
    wynik = max(wynik, aktWynik);

    cout << wynik << endl;

    return 0;
}