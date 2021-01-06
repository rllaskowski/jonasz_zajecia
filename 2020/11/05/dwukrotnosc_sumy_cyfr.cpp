/* Rozwiazanie dla N <= 10^6 */

#include <iostream>
#include <algorithm>

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
    int n;
    long long x;
    
    cin >> n >> x;
    for (int i = 0; i < n-1; i++) {
        x = sumaCyfr(x) * 2;
    }

    cout << x;

    return 0;
}