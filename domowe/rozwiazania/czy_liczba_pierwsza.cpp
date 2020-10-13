#include <iostream>
using namespace std;

bool czyPierwsza(long long n) {
    for (long long i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        } 
    }
    return true;
}

int main() {
    int n;
    int x;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (czyPierwsza(x) == true) {
            cout << "TAK";
        } else {
            cout << "NIE";
        }
    }
    return 0;
}