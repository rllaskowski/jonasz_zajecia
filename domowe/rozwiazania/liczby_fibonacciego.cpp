#include<iostream>
using namespace std;

int fib (int n) {
    long double liczba1 = 1;
    long double liczba2 = 1;
    long double suma;
    for (int i = 0; i < n; i++) {
        suma = liczba1 + liczba2;
        liczba1 = liczba2;
        liczba2 = suma;
        /*cout << suma;*/
    }
    return suma;

}

int main() {
    int n;
    cin >> n;
    cout << fib(n-2);
}