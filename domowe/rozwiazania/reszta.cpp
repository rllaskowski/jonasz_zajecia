#include<iostream>
using namespace std;


int main() {
    int n;
    int a;
    int b;
    int wynik = 0;
    int roznica;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        roznica = b - a;

        if (roznica - 5 >= 4) {
            roznica -= 5;
            wynik++;
        }
        if (roznica - 5 <= 4) {
            roznica -= 4;
            wynik++;
        }
        if (roznica - 4 < 4) {
            roznica -= 1;
            wynik++;
        }
        
    }
    cout << wynik;
    return 0;
}