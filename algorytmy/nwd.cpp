/*
Algorytm znajdowania największego wspólnego dzielnika(NWD)

Oznaczmy przez nwd(a, b) największy wspólny dzielnik liczb a i b

Korzystamy z poniższych własności liczb naturalnych:
1) Jeśli a >= b to nwd(a,b) = nwd(a%b,b)
2) nwd(a, 0) = a
3) a%b < b

Korzystając ze wzoru (1) zmniejszamy liczby, aż mniejsza z nich
nie będzie równa 0. Szukanym największym wspólnym dzielnikiem jest 
niezerowa liczba.
*/

#include <iostream>

using namespace std;

/* Wersja iteracyjna algorytmu */
int nwd_it(int a, int b) {
    if (a < b) {
        swap(a, b); // Zachowujemy a >= b
    }

    while (b != 0) {
        a = a % b;
        swap(a, b); // Zachowujemy a >= b
    }

    return a;
}


/* Wersja rekurencyjna algorytmu */
int nwd_rek(int a, int b) {
     if (a < b) {
        swap(a, b); // Zachowujemy a >= b
    }

    if (b == 0) {
        return a;
    } else {
        return nwd_rek(b, a%b);
    }
}


int main() {
    int a, b;

    cin >> a >> b;

    cout << nwd_it(a, b) << endl;
    cout << nwd_rek(a, b) << endl;

    return 0;
}