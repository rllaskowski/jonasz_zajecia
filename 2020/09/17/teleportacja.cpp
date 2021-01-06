#include <iostream>

using namespace std;

/*
1: 1
2: 1 1
3: 1 2
4: 1 1 2
5: 1 2 2
6: 1 1 2 2
7: 1 2 4
8: 1 1 2 2 4
9: 1 2 2 4
10: 1 1 2 2 4

000
153
1 2 4 8 16 32 64 = 127
26 = 16+8+2

26 = 11010

1) Skakac najdalej jak się da
skaczac ciagle o 2 razy dalej niz wczesniej

2) Powtorzyc niektore skoki. Ktore? No te, które dodane do siebie
dają reszte metrów jaka nam została


00000000000000000000000000000000000000000000000000

100011 = 1 + 2 + 32



*/

int main() {
    long long n;
    long long potega = 1;
    int wynik = 0;
    cin >> n;

    while (potega <= n) {
        n -= potega;
        potega *= 2;
        wynik++;
    }

    while (n > 0) {
        if (n % 2 == 1) {
            //bierzemy ostatnia cyfre w systemie binarnym
            wynik++;
        }
        // usuwamy ostatnia cyfre w systmie binarnym
        n /= 2;
    }

    cout << wynik << endl;
    return 0;
}