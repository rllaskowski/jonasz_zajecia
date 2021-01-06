#include <iostream>

using namespace std;

/*
999 -> 729 -> 126 -> 12 -> 2
*/

int mnozCyfry(int x) {
    int wynik = 1;

    while (x > 0) {
        if (x % 10 != 0) {
            wynik *= x % 10;   
        } 
        x /= 10;
    }
    return wynik;
}

int main() {
    int n;
    int x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        while (x >= 10) {
            x = mnozCyfry(x);
        }
        cout << x << endl;
    }
    
    return 0;
}