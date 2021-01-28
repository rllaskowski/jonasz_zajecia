#include <iostream>

using namespace std;

int liczby[1000];

int main() {
    int n;
    int licznik = 0;
    int wynik = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> liczby[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            licznik += liczby[j];
            if (licznik % 2 == 0) {
                wynik++;
            }
        }
        licznik = 0;
    }

    cout << wynik << endl;

    return 0;
}