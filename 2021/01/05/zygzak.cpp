#include <iostream>

using namespace std;

int nwd(int a, int b) {
    if (a < b) {
        swap (a, b);
    }
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}



int main() {
    string kroki;
    int licznikP = 0, licznikG = 0;
    // first - przesuniecie w gore second - w prawo
    pair <int, int> wspolrzedne = make_pair(0, 1); 
    
    cin >> kroki;

    for (char x : kroki) {
        if (x == 'P') {
            licznikP++;
        } else {
            licznikG++;
        }
    }
    
    if (kroki[0] == 'G') {
        cout << "NIE";
        return 0;
    }

    for (int i = 1; i < kroki.size(); i++) {
        // jestesmy przesunieci na jakies wspolrzedne
        // chcemy dokonac ruchu
        // góra lub prawo
        // jesli mozemy to przesuwamy sie w gore
        // jesli nie mozemy w gore to przesuwamy sie prawo
        // sprawdzmy czy mozemy sie przesunac w gore

        char krok;

        if ((wspolrzedne.first+1) * licznikP <= licznikG * wspolrzedne.second) {
            wspolrzedne.first++;
            krok = 'G';
        } else {
            wspolrzedne.second++;
            krok = 'P';
        }
        if (kroki[i] != krok) {
            cout << "NIE";
            return 0;
        }
    }

    int NWD = nwd(wspolrzedne.first, wspolrzedne.second);

    wspolrzedne.first /= NWD;
    wspolrzedne.second /= NWD;

    cout << wspolrzedne.first << "/" << wspolrzedne.second;

    return 0;
}