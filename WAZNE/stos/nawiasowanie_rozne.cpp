#include <iostream>
#include <stack>
using namespace std;

/*
Trzy typy nawiasow: klamrowy, trojkatny, okragly

Sprawdz czy podane nawiasowanie jest poprawne
*/

int rozmiar;
char stos[1000000];

void wrzuc(char x) {
    stos[rozmiar] = x;
    rozmiar++;
}

void zdejmij() {
    rozmiar--;
}

char gora() {
    return stos[rozmiar-1];
}

bool czyPoprawny(string nawiasy) {
    rozmiar = 0;

    for (int i = 0; i < nawiasy.size(); i++) {
        if (nawiasy[i] == '(' || nawiasy[i] == '<' || nawiasy[i] == '{') {
            wrzuc(nawiasy[i]);
        } else if (rozmiar == 0) {
            return false;
        } else {
            // spotkalismy nawias zamykajacy i stos nie jest pusty
            if (gora() == '(' && nawiasy[i] != ')') {
                return false;
            }

            if (gora() == '<' && nawiasy[i] != '>') {
              return false;
            }

            if (gora() == '{' && nawiasy[i] != '}') {
               return false;
            }
            zdejmij();
        }
    }

    return rozmiar == 0;
} 

int main() {
    int n;
    cin >> n;
    string nawiasy;
    cin >> nawiasy;

    if (czyPoprawny(nawiasy)) {
        cout << "TAK" << endl;
    } else {
        cout << "NIE" << endl;
    }

    return 0;

}