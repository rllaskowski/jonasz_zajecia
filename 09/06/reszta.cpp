#include <iostream>

using namespace std;

/*
wynik = 24
reszta = 4
*/

int main() {
    int n;
    int wynik = 0;
    int a;
    int b;
    int reszta;
    cin >> n;

    for (int i = 0; i < n; i++) {
        wynik = 0;
        cin >> a >> b;
        reszta = b - a;

        wynik += reszta / 5; // tyle wykorzystamy monet o nominale 5
        reszta = reszta % 5;

        wynik += reszta / 4;
        reszta = reszta % 4;

        wynik += reszta;
        cout << wynik << endl;
    }
    
    return 0;
}