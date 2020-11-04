#include <iostream>
using namespace std;


void wypiszLadnie(int czas) {
    if (czas <= 9) {
        cout << "0";
    }
    cout << czas;
}

int main() {
    int g, m, s;
    int sek;
    cin >> g >> m >> s;

    sek = (g * 3600 + m * 60 + s + 1)%(24*3600);

    g = sek / 3600;
    sek %= 3600;

    m = sek / 60;
    sek %= 60;

    s = sek;

    wypiszLadnie(g);
    cout << ":";
    wypiszLadnie(m);
    cout << ":";
    wypiszLadnie(s);
    


    return 0;
}