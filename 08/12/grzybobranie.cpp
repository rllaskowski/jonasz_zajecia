#include <iostream>
using namespace std;


/*
 -> 1 3 0
    1 2 5 ->

 -> 1 4 4
    2 6 11 ->

 -> 2 4 1 2 2
    1 2 4 6 1
    4 1 2 2 6
    1 7 3 2 7 ->

 -> 2 6  7  9  11
    3 8  12 18 19
    7 9  14 20 26
    8 16 19 22 33 ->    

1 2 3 4 5 6
7 8 9 . . .
. . . . . .

1+3+2+5 = 11

-> 1 3 ->
-> 1 3 0 ->

-> 1
   1 ->

-> 1 3
   1 2 ->
*/

int grzyby[101][101];
int wyniki[101][101];

int main() {
    int n;
    int m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> grzyby[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            wyniki[i][j] = grzyby[i][j] + wyniki[i][j-1];
            
            if (wyniki[i-1][j] > wyniki[i][j-1]) {
                wyniki[i][j] = grzyby[i][j] + wyniki[i-1][j];
            }
        }
    }

    cout << wyniki[n][m] << endl;
    return 0;
}