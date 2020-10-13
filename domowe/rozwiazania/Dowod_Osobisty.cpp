#include <iostream>
using namespace std;



int main () {
    int n;
    int numer;
    cin >> n;
    cin >> numer;

    while (numer % 2 != 0) {
        numer /= 10;
    }

    cout << numer;
}
