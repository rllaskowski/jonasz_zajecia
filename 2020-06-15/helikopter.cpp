#include <iostream>

using namespace std;

void wypisz(int ile, char c) {
    cout << "H";
    for (int i = 0; i < ile; i++) {
        cout << c;
    }
    cout << "H" << endl;
}

int main() {
    int d;

    cin >> d;

    for (int i = 0; i < d / 2; i++) {
        wypisz(d-2, ' ');
    }

    wypisz(d-2, 'H');

    for (int i = 0; i < d / 2; i++) {
        wypisz(d-2, ' ');
    }

    return 0;
}
