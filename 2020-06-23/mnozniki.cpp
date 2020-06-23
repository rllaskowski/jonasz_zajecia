#include <iostream>
using namespace std;

string rozklad(long long n) {
    string slowo = "";

    while (n > 1) {
        int dzielnik = -1;
        for (int i = 2; i <= n && i <= 27; i++) {
            /* szukamy najmniejszego dzielnika liczby n 
                zaczynając od 2 a koncząc na n */


            if (n % i == 0){
                /* jesli reszta z dzielenia n przez i jest równa
                0 to i jest dzielnikiem n */
                dzielnik = i;
                break;
            }
        }

        if (dzielnik == -1) {
            return "???";
        }
        /* zamieniamy dzielnik na odpowiadajaca mu w zadaniu literę */
        char litera = dzielnik + 'a' - 2;

        /* dodajemy na koniec slowa literę */
        slowo.push_back(litera);
        n /= dzielnik;
    }
    return slowo;
}


int main() {
    int t;
    long long n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;

        cout << rozklad(n) << endl;
        
    }
        
    return 0;
}