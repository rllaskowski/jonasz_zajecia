#include <iostream>

using namespace std;

/*

15 / 2 + 1= 7



*/


int main() {
    string ciag;
    cin >> ciag;

    for (int i = 0; i < ciag.size()/2; i++) {
        cout << ciag[i] << ciag[ciag.size()-i-1];
    }

    if (ciag.size() % 2 == 1) {
       cout << ciag[ciag.size()/2];
    } 
    return 0;
}