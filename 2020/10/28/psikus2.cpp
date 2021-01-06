#include <iostream>

using namespace std;

int main() {
    int n;
    int sumaPref = 0;
    int ileNp = 0;
    int ileP = 1;
    int cukierek;
    long long int wynik = 0;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cukierek;
        sumaPref += cukierek;

        /*
        Od samego poczatku bylo sumaPref cukierkow
        Jeśli była ich parzysta ilosc to wyniku moge dodac te przedzialy,
        ktore powstana przez odjecie jakiejs poprzedniej parzystej wartosci
        sumaPref - ileP

        W.p.p czyli gdy sumaPref jest nieparzysta mogę odejmować poprzednie nieparzyste
        wartosci sumaPref - ileNp

        NIE OBCHODZXA NAS JAKIE BYLY TE PARZYSTE/NIEPARZYTTE WARTOSCI
        tylko ile ich bylo - co mamy zapisane w zmiennych ileP/ileNp
        */

        if (sumaPref % 2 == 0) {
            wynik += ileP;
            ileP++;
        } else {
            wynik += ileNp;
            ileNp++;
        }
    }
    cout << wynik << endl;

    return 0;
}