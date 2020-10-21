#include<iostream>
using namespace std;

int nwd(int a, int b) {
    if (a < b) {
        swap(a, b);
    }

    while (b > 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int nww(int a, int b) {
    return a*b/nwd(a, b);
}

int main() {
    int l1, l2, m1, m2, nl, nm;
    int wynik = 0;

    cin >> l1 >> m1;
    cin >> l2 >> m2;

    nm = nww(m1, m2); // mianownik przed skroceniem ulamka

    l1 *= nm / m1;
    l2 *= nm / m2;

    nl = l1 + l2;

    int dzielnik = nwd(nl, nm);
    nl /= dzielnik;
    nm /= dzielnik;

    if (nl % nm == 0) {
        //wynikiem jest liczba calkowita
        cout << nl / nm;
    } else if (nl < nm) {
        cout << nl << "/" << nm;
    } else {
        cout << nl / nm << " " << nl % nm << "/" << nm;
    }
    
    return 0;
}
