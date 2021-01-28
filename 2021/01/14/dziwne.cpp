#include <iostream>

using namespace std;

int liczby[500001];
int licznik[1001];

int main() {
    int n, q;
    char operacja;
    int a, b;
    int wynik = 0;

    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> liczby[i];
    }

    for (int i = 0; i < q; i++) {
        cin >> operacja >> a >> b;
        if (operacja == 'S') {
            liczby[a] = b;
        } else {
            for (int j = a; j <= b; j++) {
                licznik[liczby[j]]++;
            }
            for (int j = 1; j <= 1000; j++) {
                if (licznik[j] % 2 != 0) {
                    wynik++;
                }
                licznik[j] = 0;
            }
            cout << wynik << endl;
            wynik = 0;
        }
    }



    return 0;
}