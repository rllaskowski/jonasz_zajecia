#include <iostream>

using namespace std;

int tab[100000];

int main() {
    int n;
    int x;
    int nowe = 0;
    int stare = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        tab[x]++;
    }

    for (int i = 1; i <= 100000; i++) {
        if (tab[i] >= 3) {
            nowe += tab[i]/2;
            if (tab[i] % 2 == 1) {
                stare++;
            }
        } else if (tab[i] > 0) {
            stare++;
        }
    }

    cout << nowe+stare;
    return 0;
}