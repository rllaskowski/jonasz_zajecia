#include <iostream>
using namespace std;

int litery[26];

int main() {
    int n;
    int k;
    string slowo;
    cin >> n >> k;
    cin >> slowo;
    int wynik = 0;
    for (int i = 0; i < n; i++) {
        int ileRoznych = 0;

        for (int j = i; j < n; j++) {
            litery[slowo[j]-'a']++;
            if (litery[slowo[j]-'a'] == 1) {
                ileRoznych++;
            } 
            if (ileRoznych >= k) {
                wynik++;
            }
        }
        for (int c = 0; c < 26; c++) {
            litery[c] = 0;
        }
    }


    cout << wynik << endl;
    return 0;
}