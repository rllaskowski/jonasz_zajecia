#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;
    int pierwsza = 1;
    int druga = n / 2 + 1;
    for (int i = 0; i < n; i++){
        if (i % 2 == 1){
            cout << pierwsza << " ";
            pierwsza++;
        } else {
            cout << druga << " ";
            druga++;
        }
    }

    return 0;
}
