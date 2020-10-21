/*
p = 5 k = 4

1 1 8 2 3

1,1,8,2
8


P = 6 k = 5
1 1 11 3 4 9
1,11,3 = 15
1,1,11,3,4 = 20


p = 8 k= 6

1 2  3 4 5 6 7 8
1 1 11 3 4 9 4 2

suma liczba od 5 do 8
myPref[8]-sumyPref[4]su = 34-16 = (5*6+4) - (2*6+4) = 5*6-2*6 + 4 - 4

Różnica dwoch liczb jest podzielna przez k jesli daja te sama reszte z dzielenia przez k
sumyPref:
0:0     = 0*6+0
1:1     = 0*6+1
2:2     = 0*6+2
3:13    = 2*6+1
4:16    = 2*6+4
5:20    = 3*6+2
6:29    = 4*6+5
7:33    = 5*6+3
8:35    = 5*6+5


sumyPref[8] - sumyPref[6] = 35-29 = 5*6+5 - (4*6+5) = 5*6-4*6 + 5-5 = 6 

sumyPref[]
0:0     = 0
1:1     = 1
2:2     = 2
3:13    = 1
4:16    = 4
5:20    = 2
6:29    = 5
7:33    = 3
8:35    = 5

reszty:
0:0
1:2
2:1
3:0
4:0
5:0

*/
#include <iostream>

using namespace std;

int tab[1000000];
int sumyPref[1000000];
int reszty[1000];

int main() {
    int p, k;
    cin >> p >> k;
    int wynik = 0;
    for (int i = 1; i <= p; i++) {
        cin >> tab[i];
        sumyPref[i] = (tab[i]+sumyPref[i-1])%k;
        wynik += reszty[sumyPref[i]];
        reszty[sumyPref[i]]++;
    }

    cout << wynik << endl;

   
    return 0;
}