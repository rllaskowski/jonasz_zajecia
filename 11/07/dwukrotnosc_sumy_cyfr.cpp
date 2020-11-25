#include <iostream>

using namespace std;


int kiedyBylismy[500];


int sumaCyfr(long long x) {
    int suma = 0;
    while (x > 0) {
        suma += x % 10;
        x /= 10;
    }
    return suma;
}



int main() {
    long long n;
    long long x;
    int ktory = 2;

    cin >> n >> x;

    if (n > 1) {
        x = sumaCyfr(x)*2;

        while (ktory < n && kiedyBylismy[x] == 0) {
            kiedyBylismy[x] = ktory;
            ktory++;
            x = sumaCyfr(x) * 2;
        }

        if (kiedyBylismy[x] > 0) {
            long long jeszcze = n - ktory;
            int dlugosc = ktory - kiedyBylismy[x]; //dlugosc cyklu
            jeszcze %= dlugosc;

            for (int i = 0; i < jeszcze; i++) {
                x = sumaCyfr(x) * 2;
            }
        }
    }
    
    cout << x;

    return 0;
}