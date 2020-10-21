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
<<<<<<< HEAD
=======
    for (int i = 0; i < 1000000000;i++) {
        cout << "tak" << endl;
    }
    cout << "KONIEC";

>>>>>>> 2cd3343935964c0819d1cd34acf10e08ecdfb3e2
    long long n;
    cin >> n;

    for (long long i = 0; i < n; i++) {
        if (czyPierwsza(i) == true) {
            cout << i << endl;
        }
    }

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 2cd3343935964c0819d1cd34acf10e08ecdfb3e2
