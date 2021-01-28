#include <iostream>

using namespace std;

/*
2 3 5 10 2 3 1 4 8

pP = 3
pNp = 1
wyn = 3 
sum = 10
*/
int main() {
    int n;
    int a;
    int prefParz = 1;
    int prefNParz = 0;
    int suma = 0;
    int wynik = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        suma += a;
        if (suma % 2 == 0) {
            wynik += prefParz;
            prefParz++;
        } else {
            wynik += prefNParz;
            prefNParz++;
        }
    }

    cout << wynik << endl;

    return 0;
}