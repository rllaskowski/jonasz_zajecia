#include <iostream>

using namespace std;

/*
latootal

altootla

taloolat 
tolaalot
[a, b, c] 
taatbtaat
ttaa b aatt

*/

int tab[26];

int main() {
    string slowo;
    cin >> slowo;

    for (int i = 0; i < slowo.size(); i++) {
        tab[slowo[i] - 'a']++;
    }
   
    for (int i = 25; i >= 0; i--) {
        for (int j = 0; j < tab[i]/2; j++) {
            cout << (char)('a'+i);
        }
    }

    for (int i = 0; i <= 25; i++) {
        if(tab[i] % 2 == 1) {
            cout << (char)('a'+i);
        }
    }

    for (int i = 0; i <= 25; i++) {
        for (int j = 0; j < tab[i]/2; j++) {
            cout << (char)('a'+i);
        }
    }
    
    

    return 0;
}