#include <iostream>
using namespace std;

/*
6
012345
aababb
2+1+1+2
*/

int main() {
    int n;
    string litery;
    cin >> n;
    cin >> litery;
    int wynik = 0; 
    
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 2; j < n; j++) {
            if (litery[i] == litery[j]) {
                wynik += j - i - 1;
            }
        }
    }
    cout << wynik;
	return 0; 
}