#include <iostream>


using namespace std;


/*

2*2*2*2...*2
0110 = 6  
1010 = 10
0000 = 0
1111 = 15

1 = 1
11 = 3
111 = 7
1111 = 15
11111 = 31
111111 = 63

0000 = 0
0001 = 1
0010 = 2
0011 = 3
...
1110 = 14
1111 = 15
*/

bool tab[5];

void wypelnij(int i) {
    if (i == 3) {
        for (int i = 0; i < 3; i++) {
            cout << tab[i];
        }
        cout << endl;
    } else {
        tab[i] = false;
        wypelnij(i+1);
        tab[i] = true;
        wypelnij(i+1);
    }
} 
/*
i=1
0123
0       i=0              co za pustka
                          /      \
     i= 1            0                1
                   /   \             / \
     i = 2     00        01      10      11
              /  \      /  \    /  \    /  \
     i= 3   000  001  010 011 100 101 110 111
            
*/
int main() {
    wypelnij(0);
}