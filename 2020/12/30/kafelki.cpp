#include <iostream>

using namespace std;

int kafelki[200001];

int main() {
    int n, m;
    int a, b;
    int licznik = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> kafelki[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        for (int j = 0; j < n; j++) {
            if (a % kafelki[j] == 0 && b % kafelki[j] == 0) {
                licznik++;
            }
        }
        cout << licznik << endl;
        licznik = 0;
    }

    return 0;
}