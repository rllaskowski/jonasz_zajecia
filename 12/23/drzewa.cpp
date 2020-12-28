#include <iostream>

using namespace std;

int main() {
    int n;
    string las;

    cin >> n;
    cin >> las;

    int sosny = 0;
    int jodly = 0;
    int sosny1 = 0;
    int jodly1 = 0;
    int sosny2 = 0;
    int jodly2 = 0;
    int sosny3 = 0;
    int jodly3 = 0;

    for (int i = 0; i < n; i++) {
        if (las[i] == 'S') {
            sosny++;
        } else {
            jodly++;
        }
    }

    cout << sosny << " " << jodly << endl;
    for (int i = 1; i < n-2; i++) {
        if (las[i-1] == 'S') {
            sosny1++;
        } else {
            jodly1++;
        }
        sosny2 = 0;
        jodly2 = 0;
        for (int j = i+2; j < n; j++) {
            if (las[j-1] == 'S') {
                sosny2++;
            } else {
                jodly2++;
            }
            
            if (las[i] == 'S') {
                sosny3 = sosny-sosny1-sosny2-1;
                jodly3 = jodly-jodly1-jodly2;
            } else {
                jodly3 = jodly-jodly1-jodly2-1;
                sosny3 = sosny-sosny1-sosny2;
            } 
            
            if (las[j] == 'S') {
                sosny3--;
            } else {
                jodly3--;
            }
            cout << i+1 << " " << j+1 << ": ";
            cout << sosny1 - jodly1 << " ";
            cout << sosny2 - jodly2 << " ";
            cout << sosny3 - jodly3 << endl; 

            if (sosny1 - jodly1 == sosny2 - jodly2 && sosny1 - jodly1 == sosny3 - jodly3) {
                cout << i+1 << " " << j+1;
                return 0;
            }
        }
    }

    cout << "BRAK";

    return 0;
}