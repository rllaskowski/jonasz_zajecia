#include <iostream>

using namespace std;

/*

3 3
6 2 3
7 8 2
4 9 7
1 2
0 1
1 1

*/
int miasto[1001][1001];

int main() {
    int n, t;
    int a, b;
    int rWierszy;
    int koszt = 0;
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> miasto[i][j];
        }
    }

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        for (int j = 0; j <= b; j++){
            // j to numer wiersza z trójkąta
            rWierszy = b - j;
            for (int c = max(a - rWierszy, 0); c <= min(a + rWierszy, n-1); c++) {
                // c to numer kolumny w trojkacie
                koszt += miasto[j][c];
            }
        }
        cout << koszt << endl;
        koszt = 0;
    }


    return 0;
}