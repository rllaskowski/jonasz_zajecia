#include <iostream>

using namespace std;

/*

n = 4 k = 3 w = 3
5 3 3
3 5 1 3 2 
*/

int main() {
    int n;
    int k;
    int w;
    int zolnierz;
    int d = 0;
    int wynik = 0;
    cin >> n >> k >> w;

    for (int i = 0; i < n; i++) {
        cin >> zolnierz;
        if (zolnierz <= w) {
            d++;
        } else {
            wynik += max(0, d-k+1);
            d = 0;
        }
    } 
    wynik += max(0, d-k+1);
    
        
    cout << wynik << endl;
    return 0;
}



