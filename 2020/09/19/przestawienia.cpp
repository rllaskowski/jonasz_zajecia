#include <iostream>

using namespace std;

/*

1,2,3,4,5,6 -> 2,6,3,1,db5,4
*/

char tab[300][300];
int kolejnoscw[300];
int kolejnosck[300];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> kolejnoscw[i];
    }

    for (int i = 1; i <= m; i++) {
        cin >> kolejnosck[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> tab[i][j];
        }
    }

    cout << endl;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << tab[ kolejnoscw[i] ][ kolejnosck[j] ];
        }
        cout << endl;
    }

    return 0;
}