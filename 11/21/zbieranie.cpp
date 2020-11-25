#include <iostream>

using namespace std;

char tab[1001][1001];

unsigned int wyniki[1001][1001][2];
/*
wyniki[i][j][0] <- ilosc parzystych sciezek do pola i,j
wyniki[i][j][1] <- ilosc nieparzystych sciezek do pola i,j
*/
int main() {
    int n, m;
    const unsigned int mod = 1000000007;
       
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> tab[i][j];
        }
    }
    
    wyniki[0][1][0] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (tab[i][j] == 'P') {
                wyniki[i][j][0] = (wyniki[i][j-1][1] + wyniki[i-1][j][1]) % mod;
                wyniki[i][j][1] = (wyniki[i][j-1][0] + wyniki[i-1][j][0]) % mod;
            } else {
                wyniki[i][j][0] = (wyniki[i][j-1][0] + wyniki[i-1][j][0]) % mod;
                wyniki[i][j][1] = (wyniki[i][j-1][1] + wyniki[i-1][j][1]) % mod;
            }
        }
    }
    
    cout << wyniki[n][m][0] << endl;

    return 0;
}