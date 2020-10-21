#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

char tab[99][99];

//    void wypelnij () {
//        for (int i = 0; i < 1000; i++) {
//            for (int j = 0; j < 1000; j++) {
//                tab[i][j] = '.';
//            }
//        }
//    }




int losuj(int a, int b) {
    return a + rand() % (b-a+1);
}

int main() {
    srand(time(NULL));
    int liczba;
/*
    wypelnij();
*/

    for (int i = 0; i < 1000; i++){
        liczba = losuj(1, 1000);
        tab[liczba%100][liczba/100] = '#';
    }
    
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            cout << tab[i][j] << endl;
        }
    }
    //sleep(10000);
    cout << endl;

    

/*

    for (int i = 0 ; i < 10; i++) {
        cout << losuj(1, 100) << endl;
    }

    cout << liczba << endl;

*/

    return 0;
}