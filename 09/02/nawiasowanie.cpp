#include <iostream>
#include <string>                                                                                                                                                                                                                                                                            .
using namespace std;


/*

Problem:
na wejsciu ciąg nawiasów 
Wypiz tak jesli nawiasowanie jest poprawne
lub nie w.p.p.

Wlasnosci poprawnego nawiasowania:
1) liczba otwartych nawiasow jest rowna ilosc zamknietych nawiasow
2) w zadnym momencie ilosc nawiasow zamykajacych nie przekracza ilosci otwierajacych
*/

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
    string nawiasowanie;
    cin >> nawiasowanie;

    if(czyPoprawne(nawiasowanie)) {
        cout << "TAK" << endl;
    } else {
        cout << "NIE" << endl;
    }

    return 0;
}