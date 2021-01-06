#include <iostream>
#include <algorithm>
using namespace std;

string imiona[1000001];

bool czyAnagram(string slowo1, string slowo2) {
    sort(slowo1.begin(), slowo1.end());
    sort(slowo2.begin(), slowo2.end());

    return slowo1 == slowo2;
}

/*
n
5

*/
int main() {
    int n, k; 
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> imiona[i];
    }

    int wynik = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (czyAnagram(imiona[i], imiona[j])) {
                wynik++;
            }
        }
    }

    cout << wynik;

    return 0;
}