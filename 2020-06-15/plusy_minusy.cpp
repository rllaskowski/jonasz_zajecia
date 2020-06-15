#include <iostream>

using namespace std;


void wypisz(int x) {  
    for (int i = 0; i < x; i++) {
        cout << "-";
    }
}

int main() {
    int minusy;

    cin >> minusy;

    wypisz(minusy);
    cout << "+";
    wypisz(minusy);

    return 0;
}
