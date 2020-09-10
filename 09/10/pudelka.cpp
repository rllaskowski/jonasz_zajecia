#include <iostream>

using namespace std;

/*
0 1 0 2 1 0 0
1 2 3 4 5 6 7 ... 10^6

ileWidocznych  = 4
ileDostepnych = 3
(IWDKMW)
1 1 1 1 1 1 2 2 3 4 4 4 5 5  

4 4 4 4 5 6 6 6
*/


int main() {
    int n;
    int a;
    int jakaLiczba = -1;
    int ileLiczb = 0;
    int wynik = 0;
  
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == jakaLiczba) {
            ileLiczb++;
            wynik = max(wynik, ileLiczb);
        } else {
            jakaLiczba = a;
            ileLiczb = 1;
        }
    }

    cout << wynik << endl;

    return 0;
}