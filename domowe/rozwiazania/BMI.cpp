#include <iostream>
using namespace std;



int main() {
    int w, h;
    int wynik;
    cin >> w >> h;

    wynik = (w * 10000) / (h * h);

    cout << wynik << endl;

    if (wynik <= 14) {
        cout << "NN!";
    }
    if (wynik >= 15 && wynik <= 18) {
        cout << "N";
    }
    if (wynik >= 19 && wynik <= 25) {
        cout << "OK";
    }
    if (wynik >= 26 && wynik <= 30) {
        cout << "W";
    }
    if (wynik >= 31 && wynik <= 35) {
        cout << "O1";
    }
    if (wynik >= 36 && wynik <= 40) {
        cout << "O2";
    }
    if (wynik >= 41) {
        cout << "OE!";
    }

    return 0;
}