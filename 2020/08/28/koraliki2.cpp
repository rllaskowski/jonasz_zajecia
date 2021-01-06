#include <iostream>

using namespace std;

/*

1 2 3 4 1
1 2 3 4 5


1 2 3 4 5 6 7 8 9  
n*n

(n-1)+(n-2)+(n-3) + ... 1 = n*(n-1)/2 ~ n^2 
1 + 2 + 3 + 4 + ...+(n-1) = n*(n-1)/2

1 2 3 4 5 6 7
1 5 7 2 1 2 2
wynik = 0
osatniKoralik[]
1:5
2:7
3:-1
4:-1
5:2
6:-1
7:3
typ


*/

int koralik[1000001];

int main() {
    int n;
    int typ;
    int wynik = 1000000;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> typ;
        if (koralik[typ] != 0) {
            wynik = min(wynik, i - koralik[typ] - 1);    
        }
        // zapamietuje w tabicy ze ostatni koralik typu "typ" byl na pozycji i
        koralik[typ] = i; 
    }
    cout << wynik << endl;
    return 0;
}