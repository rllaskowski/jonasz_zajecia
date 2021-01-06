#include <iostream>


using namespace std;

int kafelki[1000001];
int preproc[1000001];


int nwd(int a, int b) {
    if (b > a) {
        swap(a, b);
    }
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}



int main() {
    int n, m;
    int x; 
    int a, b;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> x;
        kafelki[x]++;
    }

    for (int i = 1; i <= 1000000; i++) {
        // i to rozmiar kafelka
        // sprawdzmy ile kafelkow tego rozmiaru posiadamy
        // jesli jest ich zero to mozemy pominac ten rozmiar
        for (int j = i; j <= 1000000; j += i) {
            preproc[j] += kafelki[i];
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        cout << preproc[nwd(a, b)] << endl;
    }

    return 0;
}