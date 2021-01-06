#include <iostream>

using namespace std;

int gory[1000001];

int main() {
    int n, m;
    int licznik = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> gory[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (gory[j] >= m) {
                licznik += n - j;
                break;
            }
        }
    }
    cout << licznik;

    return 0;
}