#include <iostream>

using namespace std;

bool kol[8]; // czy kolumna zajeta
bool przekGor[15]; // przekatna typu /
bool przekDol[15]; // przekatna typu 
bool plansza[8][8];

int nrPrzekGor(int w, int k) {
    return w + k;
}

int nrPrzekDol(int w, int k) {
    return w - k + 7;
}

bool postawNaPolu(int w, int k) {
    if (kol[k] == false &&  przekGor[nrPrzekGor(w, k)] == false && przekDol[nrPrzekDol(w, k)] == false) {
        kol[k] = true;
        przekGor[nrPrzekGor(w, k)] = true;
        przekDol[nrPrzekDol(w, k)] = true;
        plansza[w][k] = true;
        return true;
    } else {
        return false;
    }
}

void zwolnijPole(int w, int k) {
    kol[k] = false;
    przekGor[nrPrzekGor(w, k)] = false;
    przekDol[nrPrzekDol(w, k)] = false;
    plansza[w][k] = false;
}

bool postawOdW(int w) {
    /*
        Stawia krolowe na szachownicy 
        zaczynajac od wiersza o numerze w
    */

   if (w == 8) {
        for (int w = 0; w < 8; w++) {
            for (int k = 0; k < 8; k++) {
                if (plansza[w][k]) {
                    cout << "K";
                } else {
                    cout << "-";
                }
            }
            cout << endl;
        }
        return true;
   }

    for (int k = 0; k < 8; k++) {
        if (postawNaPolu(w, k)) {
            if(!postawOdW(w+1)) {
                // z obecnym ustawieniem nie postawimy 
                // dalej krolowych
                zwolnijPole(w, k);
            } else {
                return true;
            }
        }
    }
    return false;
}


int main() {
    postawOdW(0);

    return 0;
}

/*

K-------
----K---
-------K
-----K--
--K-----
------K-
-K------
---K----

*/