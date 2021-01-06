#include <iostream>
using namespace std;

/*
k = 3
ABABBAABBABABA
1 2 2 2 1 1

kamienice
A B
0 0
pieniadze = 0

k = n = 50000
AAAAAAA...AAAAAAAAAA
n+n-1+n-2+...1 ~ n*n
*/

int koszt[50000];
int kamienice[26];

int main() {
    int n;
    int k;
    string typ;
    int najlepszy = 0;
    int pieniadze = 0;
    cin >> n >> k;
    cin >> typ;
    for (int i = 0; i < n; i++){
        cin >> koszt[i];
    }
    int kon = 0;
    for (int pocz = 0; pocz < n; pocz++){
        pieniadze += koszt[pocz];
        kamienice[typ[pocz]-'A']++;

        while (kamienice[typ[pocz]-'A'] > k) {
            pieniadze -= koszt[kon];
            kamienice[typ[kon]-'A']--;
            kon++;
        } 
        if (pieniadze > najlepszy) {
            najlepszy = pieniadze;
        }
        
    }
    cout << najlepszy << endl;
    return 0;
}