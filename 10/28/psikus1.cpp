#include <iostream>

using namespace std;

int c[1001];

int main() {
    int n;
    int wynik = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int ilecukru = 0;

    for (int l = 0; l < n; l++) {
        // zaczynamy chodzic od domu o numerze l w prawo
        ilecukru = 0;
        for (int r = l; r < n; r++) {
           
            ilecukru  += c[r];
             cout << "Przechodzac od domu nr " << l << " do domu nr " << r << " zjadlem " << ilecukru << " cukierkow" << endl;
            if (ilecukru % 2 == 0) {
                wynik++;
            }            
        }
    }

    cout << wynik << endl;
    return 0;
}