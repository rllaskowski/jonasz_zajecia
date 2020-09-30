#include <iostream>

using namespace std;


int main() {
    int a;
    int b;
    string trojkowy;
    string liczba;
    int dziesiatkowy = 0;
    int potega = 1;
    cin >> a >> b;
    cin >> liczba;

    for (int i = liczba.size()-1; i >= 0; i--) {
        dziesiatkowy += (liczba[i]-'0')*potega;
        potega *= a;
    }

    while (dziesiatkowy != 0) {
        if (dziesiatkowy % b > 9) {
            trojkowy += (char)(dziesiatkowy % b+'A'-10);
        } else {
            trojkowy += (char)(dziesiatkowy % b+'0');
        }
       
        dziesiatkowy /= b;
    }

    for (int i = 0; i < trojkowy.size(); i++) {
        cout << trojkowy[trojkowy.size() - i - 1];
    }

    cout << endl;

    return 0;
}