#include <iostream>

using namespace std;


/*

1234567
1101001
1->2->4->7
1->4->7
1->2->7
1->7


pola:   1 1 0 1 0 0 1 1 0  1
wyniki: 1 1 0 2 0 0 4 7 0 13
*/

int wyniki[1000000];

int main() {
    int n;
    int k;
    string pola;

    cin >> n >> k;
    cin >> pola;

    wyniki[0] = 1;
    for (int i = 1; i < n; i++) {
        if (pola[i] == '1') {
            for (int j = min(6, i); j > 0; j--) {
                wyniki[i] += wyniki[i-j];
            }
        }
    }
    
    cout << wyniki[n-1];
    return 0;
}