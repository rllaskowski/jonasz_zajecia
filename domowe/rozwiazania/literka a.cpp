#include<iostream>
using namespace std;

int main() {
    int n;
    string slowo;
    cin >> n;
    cin >> slowo;

    int czyUsunac = 0;
    for (int i = 0; i < n; i++) {
        if (czyUsunac == 0 && slowo[i] == 'a' or slowo[i] != 'a') {
            czyUsunac = 1;
            cout << slowo[i];
        }
        
        
    }

    return 0;
}