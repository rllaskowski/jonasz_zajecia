#include <iostream>
using namespace std;

/*
01234567
abbabaaa
4+4+1+3


abbdccaabddaa

poLewej[0] - czyli dla litery 'a'
01112234

poLewej[1] - dla litery 'b'
00122333

*/

int poLewej[26][500010];
int poPrawej[26][500010];
/*
poLewej[0][10]
poLewej[3][21]
*/
int main() {
    int n;
    string litery;
    cin >> n;
    cin >> litery;
    int wynik = 0; 
    
    for (int i = 0; i < 26; i++) {
        // Chcemy policzyc tablice poLewej dla litery o numerze i
        for (int j = 1; j < n; j++) {
            poLewej[i][j] = poLewej[i][j-1];
            
            if (litery[j-1] == i+'a') {
                poLewej[i][j]++;
            }
        }
        
        for (int j = n-2; j >= 0; j--) {
            poPrawej[i][j] = poPrawej[i][j+1];
            
            if (litery[j+1] == i+'a') {
                poPrawej[i][j]++;
            }
        }
    }
    
    for (int i = 1; i < n - 1; i++) {
        /* Bierzy litere na indeksie i jako litere srodkowa
        3 literowego palindromu */
        
        for (int j = 0; j < 26; j++) {
        /* Chcemy dobrac litere o numerze j jako skrajne litery
        padlindromu(czyli pierwsza i ostatnia)*/
            wynik += poLewej[j][i]*poPrawej[j][i];   
        }
    }
    
    cout << wynik;
   
	return 0; 
}