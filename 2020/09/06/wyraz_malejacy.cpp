#include <iostream>

using namespace std;


bool czyMalejacy(string slowo) {
    /* sprawdz czy slowo jest malejace
    czyli kazda kolejna litera jest pozniej w alfabecie niz poprzednia */
    for (int i = 0; i < slowo.size()-1; i++) {
        if (slowo[i] <= slowo[i+1]) {
            return false;
        }
        return true;
    }
}

int main() {
    int n;
    string slowo;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> slowo;
        if (czyMalejacy(slowo)) {
            cout << slowo << endl;
        }
    }

    return 0;
}