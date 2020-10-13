#include <iostream>


using namespace std;

/*
Wejśćie
n <= 10^6 - ilość liczb do posortowania
x_1, x_2....x_n n - liczb
0 <= x_i <= 10^6
6 5 1 2 5 1 2 5 2 4
0:0
1:2
2:3
3:0
4:1
5:3
6:1
7:0
...
10^6:0
*/

int kubelki[1000000];


int main() {
    int n;
    int liczba;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> liczba;
        kubelki[liczba]++;
    }
    /* po wczytaniu liczb w kubelku o numerze x znajduje sie ilość
    wystepowan liczby x w wczytanych ciagu */

    for (int i = 0; i < 1000000; i++) {
        // rozpatrujemy kubelek o numerze i
        // wiemy ze w wczytanym ciagu bylo kubelek[i] liczby i
        // wiec wypisujemy liczbe i kubelek[i] razy
        for (int j = 0; j < kubelki[i]; j++) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}