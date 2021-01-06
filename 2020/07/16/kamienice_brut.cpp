#include <iostream>
using namespace std;

/*
6 2
AABBAA
1 2 2 2 1 1

kamienice
A B
3 2
pieniadze = 7

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
    cin >> n >> k;
    cin >> typ;
    for (int i = 0; i < n; i++){
        cin >> koszt[i];
    }

    for (int i = 0; i < n; i++){
        int pieniadze = 0;
        int j = i;
        while (j < n) {
            if (kamienice[typ[j]-'A'] < k) {
                kamienice[typ[j]-'A']++;
                pieniadze += koszt[j];
                j++;
            } else{
                break;
            }     
        }
        if (pieniadze > najlepszy) {
            najlepszy = pieniadze;
        }
        for (int c = 0; c < 26; c++) {
            kamienice[c] = 0;
        }
    }
    cout << najlepszy << endl;
    return 0;
}