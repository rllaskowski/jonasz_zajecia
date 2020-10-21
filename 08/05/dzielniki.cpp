#include <iostream>
using namespace std;

/*

dzielniki 32:
1 2 4 8 16 32

1,32
2,16
4,8

32
1,32
2,16
4,8

1) moge polaczyc dzielniki liczby n w pary 
2) chociaz jedna liczba z pary jest mniejsza lub rowna pierwiastkowi z n
3)

16
1, 2, 4, 8, 16
1*16=16
2*8=16
4*4=16

4 dzieli 32
8*x = 32

i < sqrt(n)
i*i < n

10^12
long long 2*10^18
int 2*10^9


*/

int dzielniki[2001];

/*
  0  1  2  3 4  5 6  7
  1 128 2 64 4 32 8 16 0 0 0 0 0 0 0 0 0 0 0 0
  


  n = 128
  ile = 6

  i < sqrt(n)

*/
int liczDzielniki(int n) {
    int ile = 0;
    for (long long i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            if (i*i == n) {
                dzielniki[ile] = i;
                ile++;
            } else {
                dzielniki[ile] = i;
                dzielniki[ile+1] = n/i;
                ile += 2;    
            }
        }
    }
    return ile;
}

int main() {
    int n;
    cin >> n;
    cout << liczDzielniki(n) << endl;
    return 0;
}
