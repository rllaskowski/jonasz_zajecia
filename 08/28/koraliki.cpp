#include <iostream>

using namespace std;

/*
1 <= c <= 10^6 

1 2 3 4 1
1 2 3 4 5
*/

int tab[100000];

int main() {
    int n;
    int minim = 1000000;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    for (int i = 0; i < n; i++) {
        int j = i+1;
        while (j < n && tab[j] != tab[i]) {
            j++;
        }

        if (j < n) {
            minim = min(minim, j - i - 1);
        }

    }
    cout << minim << endl;
    return 0;
    
}