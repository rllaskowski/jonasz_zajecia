#include <iostream>

using namespace std;

int main() {
    string slowo;
    int wynik = 0;
    cin >> slowo;

    for(int i = 0; i < slowo.size(); i++) {
        wynik += slowo[i] - 'A' + 1;
    }
        
    cout << wynik << endl;
    return 0;
}