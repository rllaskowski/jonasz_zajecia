#include <iostream>

using namespace std;


/*

3 6
1 2 3 4 5 6
2 3
3 4
1 4

Jeden test: N
T testów: T*N

1 2 3 4 5 
3 4 2 6 1

suma liczb od 3 do 5

2+6+1 = (3+4+2+6+1) - (3+4)
sumyPref:
0:0
1:3
2:7
3:9
4:15
5:16
*/

int sumyPref[100001];

int sumuj(int a, int b) {
    /* zwraca sume liczbe z przedzialu <a,b> */
    return sumyPref[b] - sumyPref[a-1];
}

int main() {
    int t;
    int n;
    int a, b;
    int liczba;
    cin >> t >> n;

    for (int i = 1; i <= n; i++) {
        cin >> liczba;
        sumyPref[i] = liczba+sumyPref[i-1];
    }
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << sumuj(a, b) << endl;
    }
    return 0;
}