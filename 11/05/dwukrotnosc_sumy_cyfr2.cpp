/* Rozwiazanie dla X = 1 */

#include <iostream>

using namespace std;

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

    cin >> n >> x;

    if (x == 1) {
        if (n == 1) {
            cout << 1;
        } else if (n % 6 == 0) {
            cout << 14;
        } else if (n % 6 == 1) {
            cout << 10;
        } else if (n % 6 == 2) {
            cout << 2;
        } else if (n % 6 == 3) {
            cout << 4;
        } else if (n % 6 == 4) {
            cout << 8;
        } else if (n % 6 == 5) {
            cout << 16;
        }
    } else {
        for (int i = 0; i < n-1; i++) {
            x = sumaCyfr(x) * 2;
        }
        cout << x;
    }


    return 0;
}
