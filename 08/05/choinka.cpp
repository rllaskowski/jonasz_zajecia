#include <iostream>

using namespace std;


void wypisz(int n, char znak) {
    for(int i = 0; i < n; i++) {
        cout << znak;
    }
    
}


/*
5
....A
...AAA
..AAAAA
.AAAAAAA
AAAAAAAAA
...HHH


k*2
k*2+1


0*2 1*2...8*2
0*2+1 1*2+1
*/


int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        wypisz(n-i-1, '.');
        
        wypisz(i*2+1, 'A');
        cout << endl;
    }
    wypisz(n-2, '.');
    wypisz(3, 'H');
    cout << endl;

    return 0;
}