#include <iostream>

using namespace std;


/*
....#..........#....
...##..........##...
..###..........###..
.####..........####.
####################
.####..........####.
..###..........###..
...##..........##...
....#..........#....
*/

void wypisz(char znak, int n) {
    for (int i = 0; i < n; i++) {
        cout << znak;
    }
} 

int main () {
    int h;
    int s;
    cin >> h >> s;


    for (int i = 0; i < h-1; i++) {
        wypisz('.', h-i-1);

        wypisz('#', 1+i);
        
        wypisz('.', s-h*2);

        wypisz('#', 1+i);

        wypisz('.', h-i-1);

        cout << endl;
    }

    wypisz('#', s);
    cout << endl;

    for (int i = h-2; i >= 0; i--) {
        wypisz('.', h-i-1);

        wypisz('#', 1+i);
        
        wypisz('.', s-h*2);

        wypisz('#', 1+i);

        wypisz('.', h-i-1);

        cout << endl;
    }

    

    return 0;
}