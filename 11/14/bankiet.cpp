#include <iostream>
#include <algorithm>
using namespace std;


int poLewej[1000001];
bool obs[1000001];

void obsStolik(int n) {
    // obsluguje caly stolik przy ktorym siedzi osoba o numerze n
    int nrOsoby = n;
    while (obs[nrOsoby] == false) {
        obs[nrOsoby] = true;
        nrOsoby = poLewej[nrOsoby];
    }
}

struct kolo {
    string nazwa;
};

struct samochod {
    int predkosci;
    struct kolo kolo;
};




int main() {
    int n;
    int wynik = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> poLewej[i];
    }

    for (int i = 1; i <= n; i++) {
        if (obs[i] == false) {
            // ze wzgledu na to ze obslugujemy stoliki w calosci
            // to jesli osoba o numerze i nie byla obsluzona
            // to caly stolik przy ktorym siedzi ta osoba nigdy byl obsluzony
            // mamy nowy stolik, zwiekszmy wynik
            // obluzmy stolik
            
            obsStolik(i);
            wynik++;            

        }
     }

    cout << wynik;

    return 0;
}


void funkcja(int x) {

}