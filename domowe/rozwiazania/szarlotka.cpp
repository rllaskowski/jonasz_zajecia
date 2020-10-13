#include <iostream>
using namespace std;

int tab[500001];
int wyniki [500001];
int main() {
    int n;
    int k;
    cin >> n >> k;;

    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    wyniki[0] = tab[0]
    for (int i = 1; i < n; i++) {
        wyniki[i] = tab[i] + tab[i-1];
    }

    return 0;
}