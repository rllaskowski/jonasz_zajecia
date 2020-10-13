#include<iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;
    
    if (a <= b) {
        cout << a*a;
    }

    if (b < a) {
        cout << b*b;
    }

    return 0;
}