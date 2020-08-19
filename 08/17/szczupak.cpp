#include <iostream>


using namespace std;

/*
n=6
123456
abbaba

Chcemy obliczyc wynik dla 1,4
czyli dla "abba"

Znamy wynik dla:
1,3: "abb" - 2
2,4: "bba" - 2
2,3: "bb" - 2

wynik dla slowa ktore zaczyna sie na pozycji i oraz konczy na pozycji j
wynik[i][j] = max(wynik[i+1][j], wynik[i][j-1])

if (slowo[i] == slowo[j])
    wynik[i][j] = max(wynik[i][j], wynik[i+1][j-1]+2)

3,6
3,5
4,6
4,5

X 1 2 3 4 5 6
1 1 1 2 4 4 4
2 . 1 2 2 3 3
3 . . 1 1 3 3
4 . . . 1 1 3
5 . . . . 1 1
6 . . . . . 1


0123
abba
i=3
l=2

*/

int wyniki[1000][1000];

int main() {
    int n;
    string slowo;
    cin >> n;
    cin >> slowo;
    
    for (int i = 0; i < n; i++) {
        wyniki[i][i] = 1;
    }

    for (int l = 2; l <= n; l++) {
        // l to dlugosc slow dla ktorych chcemy obliczyc wynik
        for (int i = 0; i+l-1 < n; i++) {
            /*
            Chcemy obliczyc wynik dla slowa ktore zaczyna sie w miejscu
            i oraz ma dlugosc l. W takim razie to slowo konczu sie w miejscu
            j = i+l-1
            Obliczamy pole wyniki[i][j]
            */
            int j = i+l-1;
            /* wynik dla slowa od i do j 
            jest conajmniej taki jak dla slowa od i+1 do j
            oraz dla slowa od i do j-1
            */
            wyniki[i][j] = max(wyniki[i+1][j], wyniki[i][j-1]);
            if (slowo[i] == slowo[j]) {
                /* to znaczy ze mozemy sprobwac przedljuzyc palindrom
                ktory znajduje sie gdzies w slowie od i+1 do j-1
                o dwie litery na pozycjach i oraz j bo sa takie same
                */
                wyniki[i][j] = max(wyniki[i][j], wyniki[i+1][j-1]+2);
            }
        }
    }
    cout << wyniki[0][n-1] << endl;

}