#include <iostream>
#include <cmath>
using namespace std;

int ileKw[1000001];

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        // chcemy obliczyc wynik dla liczby i
        // zauwazmy ze mamy wyniki dla kazdej mniejszej liczby
        // sprobumjy przedstawic i jako jakis kwadrat <= i
        // + jakas reszta. Ale zauwazmy ze ta reszta bedzie mniejsza
        // od i wiec dla niej mamy juz wynik

        int najmniejszy = i;

        for (int j = 1; j*j <= i; j++) {
            // chcemy przedstawic liczbe i
            // jako j^2+r
            // Zatem wykorzystamy do tej sumy 
            // 1+ileKw[r] kwadratow. Czy znalezlismy najmniejszy wynik?

            int r = i-j*j;
            if (najmniejszy > 1+ileKw[r]) {
                najmniejszy = 1+ileKw[r];
            }
        }
    
    }

    cout << ileKw[n];
    
    return 0;
}