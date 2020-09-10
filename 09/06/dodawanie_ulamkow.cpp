#include <iostream>

using namespace std;


/*
12 16

nww(a, b) = a*b/nwd(a,b)


12*16=192
nww(12,16) = 192/4 = 48

a  b
12 16
16 12
4  12
12  4
8   4
4   4
0   4
4   0


123  4
119  4
115  4
..
..
..
3    4
*/

int nwd(int a, int b) {
    if (a < b) {
        swap(a, b);
    }

    while (b > 0) {  
        a %= b;
        swap(a, b);          
    }
    return a;
}

int nww(int a, int b) {
    return a*b/nwd(a, b);
}

int main() {

    return 0;
}