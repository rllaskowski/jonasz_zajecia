#include <iostream>

using namespace std;

/*

2*4*6*3 = 144

2 = 2^1
4 = 2^2
6 = 2^1*3^1
3 = 3^1

2*6 = 2^1 * 2^1*3^1 = 2^2 * 3^1

9 = 3^2

12 = 2^2 * 3^1
144 = 2^4 * 3^2

sqrt(144) = 12

255  = 15^2 = (3*5)^2 = 3^2*5^2

4 * 25 * 7 = 2^2 * 5^2 * 7^1
4 = 2^2
25 = 5^2
7 = 7^1


1----
2: 2
3: 0
4----
5: 2
6----
7: 1


144 = 3^2

144 | 2
72  | 2
36  | 2
18  | 2
9   | 3
3   | 3
1   | 1
1   | 1
1   | 1
1   | 1
1
p = 2
25


n = 1
dzielnik = 3


2*4*6*3 = 2^4*3^2 

0:0
1:0
2:4
3:2
4:0
5:0
6:0
7:0
8:0
 
3 | 3
*/

/*
suma wszystkich wykladnikow dla wczytanych liczb

Przyklad: wykladniki[2] to suma wykladnikow przy dwojce dla wczytanych liczb
*/
int wykladniki[1000000];

void rozloz(int n) {
    int dzielnik = 2;

    while (n > 1) {
        while (n % dzielnik != 0) { // dopki dzielnik nie dzieli n
            dzielnik++;
        }
        // dzielnik dzieli n i jest liczba pierwsza
        while (n % dzielnik == 0) { // dopoki dzielnik dzieli n
            n /= dzielnik;
            wykladniki[dzielnik]++;
        }
    }
}

int main() {
    int n;
    int liczba;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> liczba;
        rozloz(liczba);
    }
    for (int i = 0; i < 1000000; i++) {
        if (wykladniki[i]%2 != 0) {
            cout << "NIE";
            return 0;
        }
    }
    cout << "TAK" << endl;

    return 0;
}

