#include <iostream>

using namespace std;

int main() {
    int n, m;
    int g = -1;
    int licznik = 0;
    int gora;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> gora;
        if (gora >= m) {
            g = i;
        }
        licznik += g+1;
    }

    cout << licznik;

    return 0;
}