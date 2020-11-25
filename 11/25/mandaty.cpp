#include <iostream>
#include <algorithm>

using namespace std;

long long pred[1000000];

long long numery[1000000];

int ileCyfr(int x) {
    int cyfry = 0;

    while (x > 0) {
        x /= 10;
        cyfry++;
    }

    return cyfry;
}

int main() {
    int n;
    long long suma = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> pred[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> numery[i];
    }

    sort(pred, pred+n);

    sort(numery, numery+n);

    for (int i = 0; i < n; i++) {
        int licznik = 0;
        int cyfry = ileCyfr(numery[n-i-1]);

        for (int j = 0; j < cyfry; j++) {
            pred[i] *= 10;
        }

        suma += pred[i]+numery[n-i-1];

    }

    cout << suma;

    return 0;
}