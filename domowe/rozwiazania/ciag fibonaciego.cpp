#include<iostream>
using namespace std;

int main() {
    long double liczba1 = 1;
    long double liczba2 = 1;
    long double suma;
    while (true) {
        suma = liczba1 + liczba2;
        cout << suma << endl;
        liczba1 = liczba2;
        liczba2 = suma;
        suma = 0;
    }

    return 0;
}