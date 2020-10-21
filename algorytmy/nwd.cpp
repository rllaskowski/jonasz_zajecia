/*
Algorytm znajdowania największego wspólnego dzielnika(NWD)
wraz z prezentacją działania

Oznaczmy przez nwd(a, b) największy wspólny dzielnik liczb a i b

Korzystamy z poniższych własności liczb:
1) Jeśli a >= b to nwd(a,b) = nwd(a%b,b)
2) nwd(a, 0) = a

Zatem korzystając ze wzoru (1) zmniejszamy liczby, aż mniejsza z nich
nie będzie równa 0. Szukanym największym wspólnym dzielnikiem jest 
niezerowa liczba.
*/

#include <iostream>

using namespace std;


int nwd(int a, int b) {
    cout << "nwd(" << a << ", " << b << ") = " << endl;  

    if (a < b) {
        // chcemy, żeby a >= b
        swap(a, b);

        cout << "nwd(" << a << ", " << b << ") = " << endl;
    }

    while (b != 0) {
        a = a % b;
        cout << "nwd(" << a << ", " << b << ") = " << endl;
        // po tej operacji a < b więc zamieniamy je
        swap(a, b);

        cout << "nwd(" << a << ", " << b << ") = " << endl;
    }

    cout << a << endl;
    return a; // wynikiem jest uzyskana niezerowa liczba
}


int main() {
    int a, b;

    cin >> a >> b;

    cout << nwd(a, b);
    return 0;
}