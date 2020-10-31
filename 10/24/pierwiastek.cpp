#include <iostream>

using namespace std;

const double dokladnosc = 0.001;


double bezw(double liczba) {
    if (liczba < 0) {
        return -liczba;
    }
    return liczba;
}

double pierwiastek(double n) {
    double liczba  = 0;
    while (liczba*liczba < n) {
        liczba += dokladnosc;
    }
    return liczba;
}

double pierwiastek2(double n) {
    // n >= 1
    double p = 1;
    double k = n;
    double s;
    
    while (true) {
        // pierwiastek z n jest gdzies pomiedzy p i k
        // wbijamy w srodek przedzialu
        s = (p+k)/2;

        if (bezw(s*s-n) <= dokladnosc) {
            // znalezlismy przybliony pierwiastek
            return s;
        } else if (s*s < n) {
            p = s;
        } else {
            k = s;
        }
    }
}



int main() {
    double n;
    cin >> n;

    for (int i = 0; i < 1000; i++) {
        pierwiastek(n);
    }
    cout << "KONIEC TESTU 1";


    for (int i = 0; i < 100000; i++) {
        pierwiastek2(n);
    }
    cout << "KONIEC TESTU 2";
    return 0;
}