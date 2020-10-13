#include <iostream>
using namespace std;

int main() {
    int n;
    string liczba;
    cin >> liczba;
    n = liczba.size();

    for (int i = n-1; i >= 0; i--) {
        cout << liczba[i];
    }

    return 0;
}