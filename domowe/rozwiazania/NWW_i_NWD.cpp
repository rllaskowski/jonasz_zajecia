#include <iostream>
using namespace std;


int NWW(int a, int b) {
    for (int i = 1; i < 1000000; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
}
/*
6 12
12 6
6 6
0 6
6 0
*/



int NWD(int a, int b) {
    while (b > 0) {
        if (a > b) {
            a -= b;
            cout << a << " " << b << endl;
        } else {
            swap(a, b);
        }
        if (a - b == 0) {
            return b;
        }
    }
}



int main(){
    int a, b;
    cin >> a >> b;
    cout << NWD(a, b);

    return 0;
}