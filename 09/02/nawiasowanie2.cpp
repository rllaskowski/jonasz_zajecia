#include <iostream>

using namespace std;

/*
012345
(()())
0 5
1 2
3 4

Wypisz tak jesli nawiasowanie jest poprawne
lub nie w.p.p

Wypisz pary nawiasow otwierajacych i zamykajacych

012345
(()())
  
stos:

1 2
3 4
0 5

Nawias zamykajacy zawsze parujemy z ostanim otwartym, ktory jeszcze
nie byl sparowany z zamknietym

01234567
(()(()))
stos:
1 2
4 5
3 6
0 7

Operacje stosu:
1) Wrzuc - push 
2) Zdejmij - pop
3) Góra    - top
*/
int rozmiar = 0;
int stos[1000000];

void wrzuc(int x) {
    stos[rozmiar] = x;
    rozmiar++;
}

void zdejmij() {
    rozmiar--;
}

int gora() {
    return stos[rozmiar-1];
}


bool czyPoprawne(string ciag) {
    int ileOtwartych = 0;

    for (int i = 0; i < ciag.size(); i++) {
        if (ciag[i] == '(') {
            ileOtwartych++;
        } else {
            ileOtwartych--;
            if (ileOtwartych < 0) {
                return false;
            }
        }
    }

    return ileOtwartych == 0;
}


int main() {
    int n;
    cin >> n;
    string nawiasy;
    cin >> nawiasy;

    if (czyPoprawne(nawiasy) == false) {
        cout << "NIE" << endl;
        return 0;
    }

    cout << "TAK" << endl;

    for (int i = 0; i < n; i++) {
        if (nawiasy[i] == '(') {
            wrzuc(i);
        } else {
            cout << gora() << " " << i << endl;
            zdejmij();
        }
    }
   
    return 0;

}