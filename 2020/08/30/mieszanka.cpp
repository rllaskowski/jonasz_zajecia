#include <iostream>

using namespace std;

/*
    a = 2231
    ileCyfrA
    0:0
    1:1
    2:2
    3:1
    4:0
    5:0
    6:0
    7:0
    8:0
    9:0
*/


/*
Sprawdza czy dwie liczby są anagramami
*/
bool czyAnagaramy(int a, int b) {
    int ileCyfrA[10];
    int ileCyfrB[10];

    for (int i = 0; i < 10; i++) {
        ileCyfrA[i] = 0;
        ileCyfrB[i] = 0;
    }

    while (a > 0) {
        ileCyfrA[a%10]++;
        a /= 10;
    }

    while (b > 0) {
        ileCyfrB[b%10]++;
        b /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (ileCyfrA[i] != ileCyfrB[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 1000000; i++){
        if (czyAnagaramy(n, i)) {
            cout << i << endl;
        }
    }
    return 0;
}