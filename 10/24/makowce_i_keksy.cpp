#include <iostream>

using namespace std;

int skladniki[100001];
int keks[100001];
int makowiec[100001];


int main() {
    int n;
    int wynik = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> skladniki[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> keks[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> makowiec[i];
    }


    for (int m = 0; ;m++) {
        // na razie ugotowalismy dokladnie m makowcow

        // licze ile jeszcze keksow moge ugotowac z pozostalych skladnikow

        int k = skladniki[0]/keks[0];
        for (int s = 1; s < n; s++) {
            k= min(k, skladniki[s]/keks[s]);
        }

        wynik = max(wynik,m+k);

        for (int i = 0; i < n; i++) {
            skladniki[i] -= makowiec[i];
            if (skladniki[i] < 0) {
                cout << wynik << endl;
                return 0;
            }
        }
        
    }



    return 0;
}