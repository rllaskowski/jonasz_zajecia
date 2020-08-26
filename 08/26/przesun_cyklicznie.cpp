#include <iostream>

using namespace std;

/*
k = 2
12345678 -> 81234567 -> 78123456

n <= 300
-10^9 <= k <= 10^9

Wejscie:
n, k
slowo

n = 5
k = 3
0 -> 3
1 -> 4
2 -> 0
3 -> 1
4 -> 2

p -> (p+k)%n

n = 5 k = 2
01234   01234
abcde-> deabc

tab:
0:d
1:e
2:a
3:b
4:c

n = 6 k = -2
0 -> 4 
0 -> (0-2)%6 = (-2)%6 = (-2+6) = 4 tak naprawde na 4
0 -> (0-3)%6 = (-3)%6 = (-3+6) = 3 na 3
0 -> (0-4)%6 = (-4)%6 = (-4+6) = 2 na 2

0 -> (0+3+6) => 

p -> ((p+k)%n+n)%n
k = 3 n = 6
0 -> (0+3)%6 + 6 = 9%6 = 3
0 1 2 3 4 5


0 6 12 18 24
1 7 13 19 25
*/
char tab[300];

int main() {
    int n;
    int k;
    string litery;
    cin >> n >> k;
    cin >> litery;

    for (int i = 0; i < n; i++) {
        tab[((i+k)%n+n)%n] = litery[i];
    }
    for (int i = 0; i < n; i++) {
        cout << tab[i];
    }
    cout << endl;
    

    return 0;
}