#include <iostream>

using namespace std;

/*
pre[k] to k-ta liczba krolewka
*/
int pre[1000001];

bool czyKrolewska(int liczba) {
    int ile1 = 0;
    while(liczba > 0) {
        if (liczba%2 == 1) {
            ile1++;
        }
        liczba/=2;
    }

    return ile1%2 == 0;
}

int main() {
    int t;
    int k;
    int licznik = 0;
    int j;
    for (j = 0; licznik < 1000000; j++) {
        if (czyKrolewska(j)) {
            licznik++;
            pre[licznik] = j;
        }
    }
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k;

        if (k < 10000000) {
            cout << pre[k] << endl;
        } else {

        }
       
      
    }
    


    return 0;
}