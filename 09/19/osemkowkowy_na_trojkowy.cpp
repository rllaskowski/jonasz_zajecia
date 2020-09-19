#include <iostream>

using namespace std;


int main() {
    string liczba;
    int dziesiatkowy = 0;
    int potega = 1;
    cin >> liczba;

    for (int i = liczba.size()-1; i >= 0; i--) {
        dziesiatkowy += (liczba[i]-'0')*potega;
        potega *= 8;
    }
    cout << dziesiatkowy;
    return 0;
}