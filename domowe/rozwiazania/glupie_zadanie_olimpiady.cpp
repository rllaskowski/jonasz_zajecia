#include <iostream>
using namespace std;


int main() {
    int n;
    int suma = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            suma++;
            cout << i << endl;
        }
    }

    cout << suma;

    return 0;
    
}